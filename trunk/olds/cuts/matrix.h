#ifndef __matrix__
#define __matrix__


#include <Rtypes.h>
#include <vector>
#include <ostream>

//SUGGESTED IMPROVEMENTS (WRITTEN HERE SO I DON"T FORGET)
// 1. We're not going to need anything other than Int_t - could remove any code allowing other types
// 2. Default constructor that makes 1 x 1 matrix with value -1 (good practice?)
//

struct coord{
	Int_t x, y;
	coord(Int_t _x, Int_t _y){
		x = _x;
		y = _y;
	}
};

template <class T>
class matrix { // Matrix Storage template
	
	// for matrix access in this file mat[y-value][x-value]
	
private:
	std::vector< std::vector<T> > mat;
	Int_t x, y;
	
	void matrixinit(Int_t _x, Int_t _y){
		x = _x, y = _y; // set size internal
		mat.resize(x); // make correct numer of rows(y)
		for(Int_t i = 0; i != x; i++) {
			mat[i].resize(y); // make correct numer of columns
			for (Int_t j = 0; j != y; j++) {
				mat[i][j] = -1;
			}
		}
	}
	
public:
	matrix(Int_t _x, Int_t _y = 1){ // matrix or vector // for scalar use vector size (1)
		if (_x < 1) {std::cerr << "matrix not alowed x < 0 size, so x set = 1" << std::endl; _x=1;}
		if (_y < 1) {std::cerr << "matrix not alowed y < 0 size, so y set = 1" << std::endl; _y=1;}
		matrixinit(_x, _y);
	} 
	
	Int_t Getx(){return x;}
	Int_t Gety(){return y;}
	

	//Function to perform AND operation on two (same-sized matrices)
	matrix operator&& (matrix matin){	//We can't pass by reference here
		if ((matin.Getx()) != x || (matin.Gety() != y)) {
			std::cerr << "matrices not of equal dimension" << std::endl;
		}
		
		matrix matout(x,y);
		
		for (int i = 0; i != x; i++) {
			for (int j = 0; j != y; j++) {
				if (mat[i][j] == matin(i,j)) {
					matout(i,j) = mat[i][j];
				} else {
					matout(i,j) = 0;
				}
				
			}
		}
		return matout;
	}
	
	matrix operator* (matrix matin){
		if (y > 1){std::cerr << "error operator * must be vectors" << std::endl; return matrix(1);}
		if (matin.Gety() > 1){std::cerr << "error operator * must be vectors" << std::endl; return matrix(1);}
		
		matrix matout (x, matin.Getx());
		
		for (int i = 0; i != x; i++) {
			for (int j = 0; j != matin.Getx(); j++) {
				if(operator()(i) == matin(j)) {
					matout(i,j) = operator()(i);
				} else {
					matout(i,j) = 0; 
				};
			}
		}
	
		return matout;
	}
	
	//Function determines if any matrix element contains a 1
	bool onecheck(){
		for (int i = 0; i != x; i++) {
			for (int j = 0; j != y; j++) {
				if (mat[i][j] == 1) {
					return true;
				}
			}
		}
		return false;
	}
	
	std::vector <coord> onecount(){
		std::vector <coord> count;
		for (int i = 0; i != x; i++) {
			for (int j = 0; j != y; j++) {
				if (mat[i][j] == 1) {
					count.push_back(coord(i,j));
				}
			}
		}
		return count;
	}	
	
	//direct access to elements // do the inversion of _x,_y here for users
	T& operator()(){return mat[0][0];} // scalar
	T& operator()(Int_t _x){return mat[_x][0];} // vector
	T& operator()(Int_t _x, Int_t _y){return mat[_x][_y];} // matrix
	T& operator()(coord c){return mat[c.x][c.y];} // coord
	
	//for easy outputting 
	friend std::ostream& operator<< (std::ostream& out, matrix mat){ //We can't pass by reference here
		for (Int_t i = 0; i != mat.x; i++) {
			for (Int_t j = 0; j != mat.y; j++) {
				out << mat.mat[i][j] << ' ';
			}
			out << std::endl;
		}
	}
	
	
};


//std::ostream& operator<< (std::ostream& out, matrix& mat){
//	for (Int_t i = 0; i != mat.Getx(); i++) {
//		for (Int_t j = 0; j != mat.Gety(); j++) {
//			out << mat(i,j) << ' ';
//		}
//		out << std::endl;
//	}
//}
#endif
