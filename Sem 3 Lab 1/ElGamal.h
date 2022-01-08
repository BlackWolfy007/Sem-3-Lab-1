#pragma once
#include "User.h"

class ElGamal : public User
{
private:
    long long int g, p;
    Vector_1D_long_long_int c, d, k, r;
    Vector_1D_pair_long_long_int data;

public:
    //	����������� ������ �� ���������
    ElGamal();
    //	����������� ������ ��� ������������� ������������
    ElGamal(long long int _p, long long int _g, bool _sender = false);
    //	����������� ������ ��� ������ � ������������ � �����������
    ElGamal(ElGamal& first_user, ElGamal& second_user);

    //	����� ��� ��������� � � d �� ��������� ������� ���������
    void Generate_c_d(int _message_size); 
    //	����� ��� ��������� k � r 
    void Generate_k_r();

    //  ����� ��� ����������� ��� "���� - �������������� ���������"
    Vector_1D_pair_long_long_int Get_data();
    //  ����� ��� ����������� d
    Vector_1D_long_long_int Get_d();
    
    //	����� ��� ���������� ��������� �� ��������� d
    void Encrypt(Vector_1D_long_long_int _d);
    //	����� ��� ������������ ���������
    void Decrypt();
    
    //	����� ��� ��������� ����������� p
    void Set_p(long long int _p);
    //	����� ��� ��������� ����������� g
    void Set_g(long long int _g);
    //	����� ��� ������� ��� "���� - �������������� ���������"
    void SetData();
    //	����� ��� ��������� �������� ��� "���� - �������������� ���������"
    void SetData(Vector_1D_pair_long_long_int _data);
    
    //	����� ��� ������ ������ ������
    void PrintData();

    //	���������� ������
    ~ElGamal();
};

