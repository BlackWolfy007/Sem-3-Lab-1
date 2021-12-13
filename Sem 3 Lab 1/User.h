#pragma once
#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
//#define _GEA_tuple
//string VARIABLE_NAME = "NULL";	//���������� ��� ���������� ���������� ����� ������������
//
//#define SAVE_VARIABLE_NAME(variable) VARIABLE_NAME = string(#variable);	//��� ��������� ����� ������������

typedef tuple <int, int, int> TP;

//template<class T> 
//using Vector_1D = vector<T>; 
//
//template<class T>
//using Vector_2D = vector<vector<T>>;
//
//typedef Vector_2D < Vector_1D < int > > Vector_2D_int;

typedef vector<int> Vector_1D_int;

typedef vector < Vector_1D_int > Vector_2D_int;


ostream& operator<<(ostream& ostr, const Vector_1D_int& Vec_1d);

ostream& operator<<(ostream& ostr, const Vector_2D_int& Vec_2d);

//�����, ���������� � ���� �������� ������, ������������ ��� ������ ���������� ����������
class User {
	
public:

	//	�������� �� �� �������� �� ���������� �������� ����� �������: ���� x - �������, ������� ���������� �������� TRUE, ���� ��� - FALSE
	bool Prime(const int);

	//	��������� �������� ����� � �������� �� begining �� end
	int Random(int begining, int ending);

	//	��������������� ������� �����
	int PrimeRandom(int begining, int ending);

	

#ifdef _GEA_tuple
	//	���������� �������� �������/generalized euclid algorithm (GEA) (� �������������� tuple)
	TP GEA_tuple(int firstNumber, int secondNumber);
#endif // _GEA_tuple

	//	���������� �������� �������/generalized euclid algorithm (GEA) (� �������������� vector)
	Vector_1D_int GEA(int firstNumber, int secondNumber);

	
};