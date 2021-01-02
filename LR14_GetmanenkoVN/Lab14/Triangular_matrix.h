#pragma once
#include "Matrix.h"
class Triangular_matrix : public Matrix
{
public:
	Triangular_matrix(Matrix &A)
	{
		this->mat.resize(A.getRows());
		this->setRows(A.getRows());
		this->setCols(A.getCols());
		for (int i = 0; i < A.getRows(); i++)
		{
			this->mat[i].resize(A.getCols());
		}
		for (int i = 0; i < A.getRows(); i++)
		{
			for (int j = 0; j < A.getCols(); j++)
			{
				this->mat[i][j] = A.mat[i][j];
			}
		}
	}

	void Tmatrix()    
	{      
		for (int i = 1; i < this->getRows(); ++i)
			for (int k = i; k < getRows(); ++k)
				for (int j = getRows() - 1; j >= 0; --j)
					if (this->mat[k][i - 1] != 0 && this->mat[i - 1][i - 1] != 0 && this->mat[i - 1][j] != 0)
						this->mat[k][j] -= ceil((this->mat[k][i - 1] / this->mat[i - 1][i - 1] * this->mat[i - 1][j]));
	}
};

