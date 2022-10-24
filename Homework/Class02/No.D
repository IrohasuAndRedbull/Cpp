#include <stdio.h>
int main() {
	const char* p= "suwarika";/*char型のポインタ変数pに文字列suwarikaを初期値として代入*/
	int n;
	printf("Please input an integer number :"); scanf_s("%d", &n);/*キーボード入力から整数値を入力、入力された整数値はint型変数nに格納*/
	printf("The extracted character is %c\n", p[num-1]);/*int型変数nに格納された値の位置の文字をポインタ変数pから抽出、それを標準出力*/

	return 0;
}
