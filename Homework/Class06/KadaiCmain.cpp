#include <iostream>
#include "TypeA.h"
using namespace std;

int main(int argc, char const* argv[]) {
	A_type* data;
	data = new A_type [10];/*配列の定義(2次元配列での定義が不明なので1次元配列で作りました)*/
	
	if (!data) {
		cout << "メモリ割り当てエラー\n";
		return 1;
	}/*メモリ割り当てに失敗するとnullを返却する*/

	for (int i = 1; i <= 10; i++) {
		data[i - 1].Set_ab(i, i);
		data[i - 1].Show();
	}

	return 0;
}
