#include <iostream>
using namespace std;

void Neg(int* x, int* y);/*ポインタ仮引数を使用*/
void Neg(int& x, int& y);/*参照仮引数を使用*/
/*int型の仮引数の符号を逆にするNeg()関数を作成、オーバーロードを用いて実装*/

void Neg(int* x, int* y) {
	*x *= -1;
	*y *= -1;
}/*ポインタ渡しの場合、符号反転を「*x *= -1」のように行う*/

void Neg(int& x, int& y) {
	x *= -1;
	y *= -1;
}/*参照渡しの場合、符号反転を「x *= -1」のように行う(*がいらない)*/

int main(int argc, char const* argv[]) {
	int i = 0, j = 0;/*初期化*/

	cout << "ポインタを使用して実装した関数の機能を確認します\n";
	cout << "------------------------------------------------\n";
	cout << "iは? : ";
	cin >> i;/*iについての標準入力*/
	cout << "jは? : ";
	cin >> j;/*jについての標準入力*/

	Neg(&i, &j);/*実引数としてiとjを&をつけて渡す*/
	cout << "\n変換後の値:\niは " << i << "\njは " << j << "\n";/*ポインタ渡しでの結果出力*/

	cout << "\n";

	cout << "参照を使用して実装した関数の機能を確認します\n";
	cout << "--------------------------------------------\n";
	cout << "iは? : ";
	cin >> i;/*iについての標準入力*/
	cout << "jは? : ";
	cin >> j;/*jについての標準入力*/

	Neg(i, j);/*実引数としてiとjを&をつけずに渡す*/
	cout << "\n\n変換後の値:\niは " << i << "\njは " << j << "\n";/*参照渡しでの結果出力*/

	return 0;
}