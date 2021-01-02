#include "Matrix.h"
#include<vector>
#include<iterator>
#include<iostream>
using namespace std;

Matrix::Matrix() : rows(0), cols(0) {}

Matrix::Matrix(int r, int c) : rows(r), cols(c)
{
	mat.resize(rows);
	for (int i = 0; i < rows; i++)
	{
		mat[i].resize(cols);
	}
}

Matrix::Matrix(const Matrix& A)
{
		this->mat.resize(A.rows);
		this->setRows(A.rows);
		this->setCols(A.cols);
		for (int i = 0; i < A.rows; i++)
		{
			this->mat[i].resize(cols);
		}
		for (int i = 0; i < A.rows; i++)
		{
			for (int j = 0; j < A.cols; j++)
			{
				this->mat[i][j] = A.mat[i][j];
			}
		}
}

Matrix::~Matrix(){}

Matrix Matrix::mul(Matrix& a, double k)
{
	Matrix c = Matrix(a.getRows(), a.getCols());
	for (int i = 0; i < a.getRows(); ++i)
		for (int j = 0; j < a.getCols(); ++j)
			c.mat[i][j] = a.mat[i][j] * k;
	return c;
}

void Matrix::setM(double n,int i,int j)
{
	mat[i][j] = n;
}

void Matrix::setRows(int r)
{
	rows = r;
}

void Matrix::setCols(int c)
{
	cols = c;
}

int Matrix::getRows()
{
	return rows;
}

int Matrix::getCols()
{
	return cols;
}

void Matrix::print()
{
	if (this->cols > 0 && rows > 0)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	else
		cout << "NULL" << endl;
}
