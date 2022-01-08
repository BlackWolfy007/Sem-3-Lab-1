#pragma once
#include "User.h"

class Shamir : public User
{
private:
    long long int p;
    map <unsigned long long int, unsigned long long int> key;

public:
    //	����������� ������ �� ���������
    Shamir();
    //	����������� ������ ��� ������������� ������������
    Shamir(unsigned long long int _p, bool _sender = false);
    //	����������� ������ ��� ������ � ������������ � �����������
    Shamir(Shamir& first_user, Shamir& second_user);

    //  ����� ��� �������� ������� ���������� ������ � �������
    bool check_for_equal_keys(unsigned long long int _key);
    //  ����� ��� �������� ������� ���������� �������� � �������
    bool check_for_equal_values(unsigned long long int _value);

    //  ����� ��� ��������� ������ �������
    void Get_map_key(Vector_1D_long_long_int& _key);
    //  ����� ��� ��������� �������� �������
    void Get_map_value(Vector_1D_long_long_int& _value);
    //	����� ��� ��������� � � d �� ��������� ������� ���������
    void Generate_key();
    
    //	����� ��� ���������� ��������� ���������
    void Encode(Vector_1D_long_long_int _message);
    //	����� ��� ������������ ��������� ���������
    void Decode(Vector_1D_long_long_int _message);

    //	����� ��� ������ ������ ������
    void PrintData();

    //	���������� ������
    ~Shamir();
};

