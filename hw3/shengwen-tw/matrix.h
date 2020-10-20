#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <string>

class Matrix {
public:
	Matrix();
	Matrix(int _row, int _column) {
		this->data = new float[_row * _column];
		this->n_row = _row;
		this->n_column = _column;
	}

	~Matrix() {
		if(data != nullptr) delete[] data;
	}

	int row(void) {
		return this->n_row;
	}

	int column(void) {
		return this->n_column;
	}

	float & operator() (int r, int c) {
		return data[r * this->n_column + c];
	}

	const float & operator() (int r, int c) const {
		return data[r * this->n_column + c];
	}

	float at(int r, int c) {
		return data[r * n_column + c];
	}

	float *raw_data(void) {
		return data;
	}

private:
	int n_row;
	int n_column;
	float *data;
};

#endif
