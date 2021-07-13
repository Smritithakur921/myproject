#include "lab1_Q1.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void QUADRATIC::print(int a, int b, int c)
{
	/*
	PRINT QUADRATIC FORMULA
	*/
	if (b >= 0 && c >= 0) {
		cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
	}
	else if (b < 0 && c < 0) {
		cout << a << "x^2" << b << "x" << c << endl;
	}
	else if (b < 0 && c >= 0) {
		cout << a << "x^2" << b << "x" << "+" << c << endl;
	}
	else if (b >= 0 && c < 0) {
		cout << a << "x^2" << "+" << b << "x" << c << endl;
	}
	else
		if (b == 0 && c == 0) {
			cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;
		}
		else
			cout << "wrong input inside class";
}

void QUADRATIC::add(int a, int b, int c, int e, int f, int g)
{
	/*
	ADD TWO QUADRATIC FORMULAS
	*/
	int sum1, sum2, sum3;
	sum1 = a + e;
	sum2 = b + f;
	sum3 = c + g;
	print(sum1, sum2, sum3);
}

void QUADRATIC::discriminant(int a, int b, int c)
{
	/*
	FIND DISCRIMINANT OF QUADRATIC FORMULA AND ANWSERS
	*/
	//cin >> a >> b >> c;
	float D;
	float determinant = (b * b) - (4 * a * c);
	if (determinant < 0) {
		// cout << sqrt(-determinant) << 'i' << endl;
		D = sqrt(-determinant); float c1 = -b / (2 * a); float c2 = (D / (2 * a));
		cout << "There are two complex root: " << c1 << " + " << c2
			<< "i" << " , " << c1 << " - " << c2 << "i" << endl;
	}
	else {
		// cout << sqrt(determinant) << "\n" << endl;
		D = sqrt(determinant);
		float root1 = (-b - D) / (2 * a);
		float root2 = (-b + D) / (2 * a);
		if (root1 == root2) {
			cout << "There are double roots: " << root1 << endl;
		}
		else {
			cout << "There are two roots: " << root2 << "," << root1 << endl;
		}
	}

	// return(value1);

}