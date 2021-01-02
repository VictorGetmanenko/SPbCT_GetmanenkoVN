#pragma once
#include<vector>
using namespace std;

class Matrix
{
private:	
	int rows;                        // количество строк
	int cols;                        // количество столбцов
public:
	vector<vector<double>> mat;      // матрица
	Matrix();                        // конструктор по умолчанию
	Matrix(int, int);                // конструктор с параметрами
	Matrix(const Matrix& object);    // конструктор копирования
	~Matrix();                       // деструктор
	Matrix mul(Matrix&, double);     // умножение матрицы на число
	void setM(double,int,int);          
	void setRows(int);
	void setCols(int);
	int getRows();
	int getCols();
	void print();
};

