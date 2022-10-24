#include <stdio.h>

int Product(int num); /*関数のプロトタイプ宣言*/
int x[1000] = {}, w[1000] = {};/*ベクトルx,wをグローバル変数として定義*/

int main() {
	int num = 0;
	printf("Please input N :"); scanf_s("%d", &num);

	if (num > 1000 && num < 0) {
		printf("This number is out of range.\n");
		return 0;
	}/*0未満、1001以上は受け付けないようにする。*/

	printf("N:%d\n\n", num);

	int i = 0;
	for (i = 0; i < num; i++) {
		printf("Please input a x[%d] :", i); scanf_s("%d", &x[i]);
	}
	printf("-------------------------------------\n");
	for (i = 0; i < num; i++) {
		printf("Please input a w[%d] :", i); scanf_s("%d", &w[i]);
	}/*数値入力部分*/

	printf("The result is %d\n", Product(num));

	return 0;
}

int Product(int num) {
	int sum = 1;
	for (int i = 0; i < num; i++) {
		sum = sum* x[i] * w[i];
	}
	return sum;
}
