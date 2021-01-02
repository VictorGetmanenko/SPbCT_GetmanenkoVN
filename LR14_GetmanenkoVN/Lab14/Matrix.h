#pragma once
#include<vector>
using namespace std;

class Matrix
{
private:	
	int rows;                        // ���������� �����
	int cols;                        // ���������� ��������
public:
	vector<vector<double>> mat;      // �������
	Matrix();                        // ����������� �� ���������
	Matrix(int, int);                // ����������� � �����������
	Matrix(const Matrix& object);    // ����������� �����������
	~Matrix();                       // ����������
	Matrix mul(Matrix&, double);     // ��������� ������� �� �����
	void setM(double,int,int);          
	void setRows(int);
	void setCols(int);
	int getRows();
	int getCols();
	void print();
};

