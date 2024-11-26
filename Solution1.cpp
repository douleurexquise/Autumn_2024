#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите x координату: ";
	cin >> x;
	cout << "\nВведите y координату: ";
	cin >> y;
	if (x > 0 && y > 0) {
		cout << "\nТочка лежит в первой четверти";
	}
	else if (x < 0 && y > 0) {
		cout << "\nТочка лежит во второй четверти";
	}
	else if (x < 0 && y < 0) {
		cout << "\nТочка лежит в третьей четверти";
	}
	else if (x > 0 && y < 0) {
		cout << "\nТочка лежит в четвертой четверти";
	}
	else if (x == 0 && y == 0) {
		cout << "\nТочка лежит в середине координат";
	}
	else if (x == 0) {
		cout << "\nТочка лежит на оси x";
	}
	else if (y == 0) {
		cout << "\nТочка лежит на оси y";
	}
	return 0;
}