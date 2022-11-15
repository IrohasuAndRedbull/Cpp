#pragma once
#ifndef TYPEA_H
#define TYPEA_H

#include <iostream>
using namespace std;

class A_type {
	double a, b;
public:
	void Set_ab(double x, double y) {a = x; b = y;}
	void Show() { cout << a << " " << b << "\n"; }
};

#endif
