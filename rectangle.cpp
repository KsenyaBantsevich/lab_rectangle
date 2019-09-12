#include "pch.h"
#include <iostream>


using namespace std;

class Rectangle
{
private:
	int x1, x2, y1, y2, dx, dy, r;
public:
	Rectangle(int a, int b, int c, int d) : x1(a), x2(b), y1(c), y2(d) {	}
	Rectangle() : x1(2), x2(5), y1(2), y2(6) {	}
	~Rectangle() { }

	void Postroenie(int, int, int, int);
	void Input(); 
	void Minimal(); 

};
void Rectangle::Postroenie(int x1, int x2, int y1, int y2) {
	int i = 0, j = 0;
	for (i = 0; i < x2; i++) {
		if (i >= x1 - 1 && i <= x2 - 1) {
			cout << "o";
		}
		else {
			cout << " ";
		}
	}
	cout << "\n";

	for (i = y1 - 1; i < y2 - 2; i++) {
		for (j = 0; j < x2; j++) {
			if (j == x1 - 1 || j == x2 - 1)
				cout << "o";
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for (i = 0; i < x2; i++) {
		if (i >= x1 - 1 && i <= x2 - 1) {
			cout << "o";
		}
		else {
			cout << " ";
		}
	}
	cout << "\n";
}
void Rectangle::Input() {
	cout << "Введите координату х левых точек" << endl; cin >> x1;
	cout << "Введите координату y верхних точек" << endl; cin >> y1;
	cout << "Введите координату х правых точек" << endl; cin >> x2;
	cout << "Введите координату y нижних точек" << endl; cin >> y2;
}

void Rectangle::Minimal() {
	double x3, x4, y3, y4, x_min = x1, x_max = x1, y_min = y1, y_max = y1;
	cout << " 2 прямоугольник:" << endl;
	cout << "Введите координату х левых точек" << endl; cin >> x3;
	cout << "Введите координату y верхних точек" << endl; cin >> y3;
	cout << "Введите координату х правых точек" << endl; cin >> x4;
	cout << "Введите координату y нижних точек" << endl; cin >> y4;
	cout << endl << "Вы ввели следующие координаты 1 прямоугольника:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
	cout << endl;
	Postroenie(x1, x2, y1, y2);
	cout << endl << endl;

	cout << "Вы ввели следующие координаты 2 прямоугольника:" << endl;
	cout << " A:" << "(" << x3 << "," << y3 << ")" << endl;
	cout << " B:" << "(" << x4 << "," << y3 << ")" << endl;
	cout << " C:" << "(" << x4 << "," << y4 << ")" << endl;
	cout << " D:" << "(" << x3 << "," << y4 << ")" << endl;
	cout << endl;
	Postroenie(x3, x4, y3, y4);
	cout << endl << endl;

	int A[4] = { x1, x2, x3, x4 }, B[4] = { y1, y2, y3, y4 };
	for (int i = 0; i < 4; i++)
	{
		if (x_max < A[i])
		{
			x_max = A[i];
		}
		if (y_max < B[i])
		{
			y_max = B[i];
		}
		if (x_min > A[i])
		{
			x_min = A[i];
		}
		if (y_min > B[i])
		{
			y_min = B[i];
		}
	}
	cout << "Наименьший прямоугольник содержащий оба предыдущих имеет следующие координаты: " << endl;
	cout << " A:" << "(" << x_min << "," << y_max << ")" << endl;
	cout << " B:" << "(" << x_max << "," << y_max << ")" << endl;
	cout << " C:" << "(" << x_max << "," << y_min << ")" << endl;
	cout << " D:" << "(" << x_min << "," << y_min << ")" << endl << endl;
	Postroenie(x_min, x_max, y_min, y_max);
	cout << "\n";
}
