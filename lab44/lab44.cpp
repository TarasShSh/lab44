// lab44.cpp
// Шевченко Тарас
// Лабораторна робота N 4.4
// Розгалуження, задане графіком функції
// Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double R, x, xp, xk, dx, y;
int main(){
cout << "R = "; cin >> R;
cout << "xp = "; cin >> x;
cout << "xk = "; cin >> xk;
cout << "dx = "; cin >> dx;

cout << fixed;
cout << "---------------------------" << endl;
cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
cout << "---------------------------" << endl;

x = xp;
while (x <= xk)
{
	if (x <= -7 - R)
		y = R;
	else if (x > -7 - R && x <= -7 + R)
		y = R - sqrt(pow(R, 2) - pow(x, 2) - 14 * x - 49);
	else if (x > -7 + R && x <= -4)
		y = R;
	else if (x > -4 && x <= 0)
		y = -(R * x) / 4.;
	else if (x > 0 && x <= acos(-1))
		y = sin(x);
	else
		y = x - acos(-1);

	cout << "|" << setw(7) << setprecision(2) 
		<< x << " |" << setw(10) << setprecision(3) << y
		<< " |" << endl;

	x += dx;
}
cout << "---------------------------" << endl;
}

