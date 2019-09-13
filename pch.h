#ifndef PCH_H
#define PCH_H

class Rectangle
{
private:
	int x1, x2, y1, y2, dx, dy, r;
public:
	Rectangle(int a, int b, int c, int d) : x1(a), x2(b), y1(c), y2(d) {	}
	Rectangle() : x1(2), x2(5), y1(2), y2(6) {	}
	~Rectangle() { }

	void Input();
	void Result();
	void Peremeshenie();
	void Size();
	void Size_na_1();
	void Size_na_minus_1();
	void Minimal();
	void MinimalSPrisv();
	void Сross();
	void CrossSPrisv();
	void Postroenie(int, int, int, int);
};

#endif 
