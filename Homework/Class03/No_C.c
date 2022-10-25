#include <iostream>
using namespace std;


char min(char things);
int min(int things);
double min(double things);/*関数のプロトタイプ宣言*/

char min(char things) {
	cout << "整数用のsroot()\n";
	return sqrt(num);
}/*char型のmin()関数*/

long sroot(long num) {
	cout << "long型用のsroot()\n";
	return sqrt(num);
}/*long型のsroot()関数*/

double sroot(double num) {
	cout << "float型用のsroot()\n";
	return sqrt(num);
}/*float型のsroot()関数*/
/*引数の平方根を返すsroot()をint型、long型、double型の3通りにオーバーロードする。*/

int main() {

	cout << "65536の平方根:" << sroot(65536) << "\n\n";/*2^16の平方根を表示*/
	cout << "65536Lの平方根:" << sroot(65536L) << "\n\n";/*2^16の平方根を表示*/
	cout << "65792.25の平方根:" << sroot(65792.25) << "\n\n";/*256.5^2の平方根を表示*/

	return 0;
}
