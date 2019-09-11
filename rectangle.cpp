#include "pch.h"
#include <iostream>

using namespace std;

class Rectangle
{
private:
	int x1, x2, y1, y2, dx, dy, k, k1;
public:
	Rectangle(int a, int b, int c, int d) : x1(a), x2(b), y1(c), y2(d) {	}
	Rectangle() : x1(2), x2(5), y1(2), y2(6) {	}
	~Rectangle() { }

	void Postroenie(int, int, int, int);
	void Peremeshenie();
	void Size();
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

void Rectangle::Peremeshenie() {
	cout << " На сколько единиц вы хотите переместить прямоугольник по оси X ?" << endl;
	cin >> dx;
	cout << " На сколько единиц вы хотите переместить прямоугольник по оси Y ?" << endl;
	cin >> dy;
	x1 += dx;
	x2 += dx;
	y1 += dy;
	y2 += dy;
	cout << "Получились следующие координаты прямоугольника:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Rectangle::Size() {
	cout << " Во сколько раз изменяем длину стороны прямоугольника по оси Х?" << endl;
	cin >> k;
	cout << "\n Во сколько раз изменяем длину стороны прямоугольника по оси Y?" << endl;
	cin >> k1;
	x2 *= k;
	y2 *= k1;
	cout << "Получились следующие координаты прямоугольника:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
	Postroenie(x1, x2, y1, y2);
}
