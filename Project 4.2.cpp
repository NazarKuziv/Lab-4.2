// Lab_04_2.cpp
 // < Кузів Назар >
 // Лабораторна робота № 4.2
 // Табуляція функції, заданої формулою: функція однієї змінної
 // Варіант 6

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 5 * exp(3 * x);
		if (x <= -1)
			B = 3 + sin(abs(x));
		else
			if (x > 3)
				B = 7 - pow(2 * x, 3 / 2);
			else
				B = 2 * exp(x / 4 - 1);
		y = A - B;
		cout << "|" << setw(7) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}