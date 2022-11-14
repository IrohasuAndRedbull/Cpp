/*これはヘッダーファイルです*/
#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
	string name;/*名前*/
	string from;/*出身地*/
public:
	void setName(string name) { this -> name = name; }
	void setFrom(string from) { this->from = from; }/*セッタ*/

	string getName() { return name; }
	string getFrom() { return from; }/*ゲッタ*/
};/*名前と出身地を格納するクラス*/

#endif
