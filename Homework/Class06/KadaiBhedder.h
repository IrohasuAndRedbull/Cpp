/*これはヘッダーファイルです*/
#pragma once
#ifndef TYPEA_H
#define TYPEA_H

#include <iostream>
using namespace std;

class A_type {
	double a, b;
public:
	A_type(double x, double y) {a = x; b = y;}
	void Show() { cout << a << " " << b << "\n"; }
};

#endif
