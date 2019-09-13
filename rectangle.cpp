#include "pch.h"
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Rectangle ObjectA; 
	int Control;
	while (true)
	{
		system("cls");
		cout << " Задание: Прямоугольник \n"
			" 1 - Ввод данных \n 2 - Координаты вершин \n 3 - Перемещение \n 4 - Изменение размера \n 5 - Увеличение размера на единицу по каждой из осей \n"
			" 6 - Уменьшение размера на единицу по каждой из осей \n 7 - Минимальный прямоугольник содержащий 2 заданных\n 8 - Минимальный прямоугольник содержащий 2 заданных (с присваиванием)\n"
			" 9 - Прямоугольник, являющийся общей частью 2 заданных\n 10 - Прямоугольник, являющийся общей частью 2 заданных (с присваиванием)\n 0 - Выход\n";
		cout << "\n Ваш выбор >>> ";
		cin >> Control;
		switch (Control)
		{
		case 1:
		{
			ObjectA.Input();
			break;
		}
		case 2:
		{
			ObjectA.Result();
			break;
		}
		case 3:
		{
			ObjectA.Peremeshenie();
			break;
		}
		case 4:
		{
			ObjectA.Size();
			break;
		}
		case 5:
		{
			ObjectA.Size_na_1();
			break;
		}
		case 6:
		{
			ObjectA.Size_na_minus_1();
			break;
		}
		case 7:
		{
			ObjectA.Minimal();
			break;
		}
		case 8:
		{
			ObjectA.MinimalSPrisv();
			break;
		}
		case 9:
		{
			ObjectA.Сross();
			break;
		}
		case 10:
		{
			ObjectA.CrossSPrisv();
			break;
		}
		case 0:
			return 0;
		}
		cout << "\n\nНажмите любую клавишу...";
		_getch();
	}
	return 0;
}

