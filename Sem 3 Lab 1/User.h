#pragma once
#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

//string VARIABLE_NAME = "NULL";	//���������� ��� ���������� ���������� ����� ������������
//
//#define SAVE_VARIABLE_NAME(variable) VARIABLE_NAME = string(#variable);	//��� ��������� ����� ������������

typedef tuple <int, int, int> TP;

class User {
public:

	//	�������� �� �� �������� �� ���������� �������� ����� �������: ���� x - �������, ������� ���������� �������� TRUE, ���� ��� - FALSE
	bool Prime(const int);

	//	��������� �������� ����� � �������� �� begining �� end
	int Random(int begining, int ending);

	//	��������������� ������� �����
	int PrimeRandom(int begining, int ending);
		
	TP RashAlgEv(int a, int b);
};