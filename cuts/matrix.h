#ifndef __matrix__
#define __matrix__


#include <Rtypes.h>
#include <vector>
#include <ostream>

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
	
	matrix operator&& (matrix &matin){
		if ((matin.Getx()) != x || (matin.Gety() != y)) {
			std::cerr << "matrixes not of equal dimentions" << std::endl;
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
	
	//direct access to elements // do the inversion of _x,_y here for users
	T& operator()(){return mat[0][0];} // scalar
	T& operator()(Int_t _x){return mat[_x][0];} // vector
	T& operator()(Int_t _x, Int_t _y){return mat[_x][_y];} // matrix
	
	//for easy outputting 
	friend std::ostream& operator<< (std::ostream& out, matrix& mat){
		for (Int_t i = 0; i != mat.x; i++) {
			for (Int_t j = 0; j != mat.y; j++) {
				out << mat.mat[i][j] << ' ';
			}
			out << std::endl;
		}
	}
};

#endif
