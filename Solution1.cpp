#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� x ����������: ";
	cin >> x;
	cout << "\n������� y ����������: ";
	cin >> y;
	if (x > 0 && y > 0) {
		cout << "\n����� ����� � ������ ��������";
	}
	else if (x < 0 && y > 0) {
		cout << "\n����� ����� �� ������ ��������";
	}
	else if (x < 0 && y < 0) {
		cout << "\n����� ����� � ������� ��������";
	}
	else if (x > 0 && y < 0) {
		cout << "\n����� ����� � ��������� ��������";
	}
	else if (x == 0 && y == 0) {
		cout << "\n����� ����� � �������� ���������";
	}
	else if (x == 0) {
		cout << "\n����� ����� �� ��� x";
	}
	else if (y == 0) {
		cout << "\n����� ����� �� ��� y";
	}
	return 0;
}