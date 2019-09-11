#include "pch.h"
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Rectangle
{
private:
	int x1, x2, y1, y2, dx, dy, r;
public:

	Rectangle(int a, int b, int c, int d) : x1(a), x2(b), y1(c), y2(d) {	}

	Rectangle() : x1(2), x2(5), y1(2), y2(6) {	}
	~Rectangle() { }


};



