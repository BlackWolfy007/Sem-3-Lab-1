#pragma once
#include "User.h"

class Diffie_Hellman : public User
{
private:
    int g, p, X, Y, Z;

public:
    //	����������� ������ �� ���������
    Diffie_Hellman();
    //	����������� ������ ��� ������������� ������������
    Diffie_Hellman(int _g, int _p);
    //	����������� ������ ��� ������ � ������������ � �����������
    Diffie_Hellman(Diffie_Hellman&, Diffie_Hellman&);
    
    //	����� ��� ��������� g
    void Set_g(int);
    //	����� ��� ��������� p
    void Set_p(int);
    //	����� ��� ��������� X
    void Set_X(int);
    //	����� ��� ��������� X
    void Generate_X();
    //	����� ��� ��������� g
    int Get_g();
    //	����� ��� ��������� p
    int Get_p();
    //	����� ��� ��������� X
    int Get_X();
    //	����� ��� ��������� Y
    int Get_Y();
    //	����� ��� ��������� Z
    int Get_Z();
    //	����� ��� ������� Y
    void Calc_Y();
    //	����� ��� ������� Z
    void Calc_Z(int);
    //	����� ��� ������ ������ ������
    void PrintData();

    //	���������� ������
    ~Diffie_Hellman();
};

