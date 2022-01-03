#pragma once
#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <map>

//#include "Diffie_Hellman.h"
//#include "Shamir.h"

using namespace std;
//#define _GEA_tuple


typedef tuple <int, int, int> TP_int;

typedef vector<int> Vector_1D_int;

typedef vector < Vector_1D_int > Vector_2D_int;

typedef vector<long long> Vector_1D_long_long;

typedef vector<Vector_1D_long_long> Vector_2D_long_long;

ostream& operator<<(ostream& ostr, const Vector_1D_int& Vec_1d);

ostream& operator<<(ostream& ostr, const Vector_2D_int& Vec_2d);

ostream operator<<(ostream& ostr, map<int, int>& map_int);

//�����, ���������� � ���� �������� ������, ������������ ��� ������ ���������� ����������
class User {
protected: 
	string User_Name;
	
public:
	
	void SetUser_Name(string);

	//	�������� �� �� �������� �� ���������� �������� ����� �������: ���� x - �������, ������� ���������� �������� TRUE, ���� ��� - FALSE
	bool Prime(const int);

	//	��������� �������� ����� � �������� �� begining �� end
	int Random(int begining, int ending);

	//	��������������� ������� �����
	int PrimeRandom(int begining, int ending);

	//	���������� ����� ��������/The greatest common divisor (GCD)
	long long GCD(long long firstNumber, long long secondNumber);
	
	//	���������� � ������� �� ������/Modular exponentiation
	long long Mod_Exp(long long base, long long power, long long divisor);

#ifdef _GEA_tuple
	//	���������� �������� �������/generalized euclid algorithm (GEA) (� �������������� tuple)
	TP_int GEA_tuple(int firstNumber, int secondNumber);
#endif // _GEA_tuple

	//	���������� �������� ������� / generalized euclid algorithm (GEA) (� �������������� vector)
	Vector_2D_int GEA(int firstNumber, int secondNumber);

	// �������� ����� �� cd mod m = 1 ��� d = c^-1 mod m. firstNumbr - c, secondNumber - m
	long long Mod_Inverse(long long firstNumber, long long secondNumber);

};