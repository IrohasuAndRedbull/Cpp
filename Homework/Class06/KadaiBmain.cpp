#include <iostream>
#include "TypeA.h"
using namespace std;

int main(int argc, char const* argv[]){
	A_type ob[2][5] = {
		A_type(1, 1), A_type(2, 2), A_type(3, 3), A_type(4, 4), A_type(5, 5),
		A_type(6, 6), A_type(7, 7), A_type(8, 8), A_type(9, 9), A_type(10, 10),
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) ob[i][j].Show();
	}
	return 0;
}
