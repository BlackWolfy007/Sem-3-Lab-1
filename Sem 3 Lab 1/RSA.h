#pragma once
#include "User.h"
//	�������� ���������� RSA
class RSA : public User
{
private:
	Vector_1D_long_long_int p, q, n, fi, c, d;

public:
	//	����������� ������ �� ���������
	RSA();
	//	����������� ������ ��� ������������� ������������
	RSA(bool _sender = false);
	//	����������� ������ ��� ������ � ������������ � �����������
	RSA(RSA& first_user, RSA& second_user);

	//	����� ��� ��������� p
	void Generate_p();
	//	����� ��� ��������� p �� ����������� ������� ���������
	void Generate_p(int _message_size);
	//	����� ��� ��������� q
	void Generate_q();
	//	����� ��� ��������� d
	void Generate_d();
	
	//	����� ��� ����������� d
	Vector_1D_long_long_int Get_d();
	//	����� ��� ����������� n
	Vector_1D_long_long_int Get_n();
	
	//	����� ��� ���������� n
	void Calc_n();
	//	����� ��� ���������� fi
	void Calc_fi();
	//	����� ��� ���������� c
	void Calc_c();

	//	����� ��� ���������� ��������� �� �������� d � n
	void Encrypt(Vector_1D_long_long_int _d, Vector_1D_long_long_int _n);
	//	����� ��� ������������ ���������
	void Decrypt();
	
	//	����� ��� ������ ������ ������
	void PrintData();

	//	���������� ������
	~RSA();
};

