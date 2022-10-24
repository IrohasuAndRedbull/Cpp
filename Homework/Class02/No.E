#include <stdio.h>
int main() {
	int n[3]={};/*配列の定義*/
	int* min;/*最小値を表すポインタ変数*/
	int* p_n = n;/*nのポインタ変数*/

	printf("input a first integer number :"); scanf_s("%d", &n[0]);
	printf("input a second integer number :"); scanf_s("%d", &n[1]);
	printf("input a third integer number :"); scanf_s("%d", &n[2]);/*3つの任意の整数を入力、int型の配列nに格納する*/

	min = p_n; /*n[0]を最小値にする*/

	for (int i=0; i<2; i++) {
		if (*(p_n+i+1) < *min) *min = *(p_n+i+1);
	}/*n[1]とn[2]がn[0]よりも小さい値だった場合、値をポインタ変数を使用して入れ替える。*/

	printf("The minimum integer is %d\n", *min);/*最小値の出力*/

	return 0;
}
