#include "User.h"

bool User::Prime(const int number) {
	//	� ������, ���� number ������ 4, �� ���������� �������� ������� �����, ������ ��� ������ 5 - ��� ���������� �� ������ ������� � ������ �������� �� ������� �� 24, ������� ������ ����� 1. ���� number ������ ��� ����� 4
	if (number > 4) {
		return ((number * number) % 24 == 1);
	}
	else {
		vector <int> Numbers;
		//	������������� ��������� ������� ����������� ��������� � ���� ������� ����� �� 2 �� number ������������
		for (int i = 2; i <= number; i++) {
			Numbers.push_back(i);
		}
		//	�������� �� ��, �������� �� ����� ������� - ���� ���, ��� ���������� �����
		for (int i = 0; i < int(Numbers.size()); i++) {
			int j = 2;
			while (j <= Numbers[i]) {
				if ((Numbers[i] % j == 0) && (Numbers[i] != j)) {
					Numbers[i] = 0;
				}
				j++;
			}
		}
		//	������ ����� �� �������
		int i = 0;
		while (i<int(Numbers.size())) {
			if (Numbers[i] == 0) {
				Numbers.erase(Numbers.begin() + i);
				i = 0;
				continue;
			}
			i++;
		}
		//	���� ��������� ������� ������� ����� number, ����������� �������� TRUE, � ���� ������ - FALSE
		return (number == Numbers[Numbers.size() - 1]);
	}
}

int User::Random(int begining, int ending) {
	return (begining + rand() % (ending - begining));
}

int User::PrimeRandom(int begining, int ending) {	
	int number = 0;

	do {
		number = begining + rand() % (ending - begining);
	} while (!(Prime(number)));

	return number;
}

TP User::RashAlgEv(int firstNumber, int secondNumber) {
	tuple <int, int, int> X = { firstNumber,1,0 }, Y = { secondNumber,0,1 }, Temporary = { 0,0,0 };
	int q = 0, i = 0;

	while (get<0>(Y) != 0) {
		cout << "�������� �" << i << endl;
		cout << "X: ( " << get<0>(X) << ", " << get<1>(X) << ", " << get<2>(X) << " )" << endl;
		cout << "Y: ( " << get<0>(Y) << ", " << get<1>(Y) << ", " << get<2>(Y) << " )" << endl;
		q = get<0>(X) / get<0>(Y);
		cout << "q = x1 / y1 = " << get<0>(X) << " / " << get<0>(Y) << " = " << q << endl;
		Temporary = { get<0>(X) % get<0>(Y),get<1>(X) - q * get<1>(Y),	get<2>(X) - q * get<2>(Y) };
		cout << "Temporary: ( " << get<0>(X) << " % " << get<0>(Y) << " = " << get<0>(Temporary) << ", " << get<1>(X) << " - " << q << " * " << get<1>(Y) << " = " << get<1>(Temporary) << ", " << get<2>(X) << " - " << q << " * " << get<2>(Y) << " = " << get<2>(Temporary) << " )" << endl;
		X = Y;
		cout << "X = Y = (" << get<0>(X) << " " << get<1>(X) << " " << get<2>(X) << ")" << endl;
		Y = Temporary;
		cout << "Y = Temporary = (" << get<0>(Y) << " " << get<1>(Y) << " " << get<2>(Y) << ")" << endl << endl;
		i++;
	}
	cout << "X: ( " << get<0>(X) << ", " << get<1>(X) << ", " << get<2>(X) << " )" << endl;
	cout << "Y: ( " << get<0>(Y) << ", " << get<1>(Y) << ", " << get<2>(Y) << " )" << endl;
	cout << "Temporary: ( " << get<0>(Temporary) << ", " << get<1>(Temporary) << ", " << get<2>(Temporary) << " )" << endl;
	cout << "d = " << get<0>(X) << ", u = " << get<1>(X) << ", v = " << get<2>(X) << endl;

	return X;
}