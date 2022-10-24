#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float Step(float);
void InStepOf(float[], float[]);/*関数のプロトタイプ宣言*/

int main() {
	float x[10], w[10];/*float型の1次元配列、要素数10*/
	float sum = 0.0;

	InStepOf(x, w);

	for (int i = 0; i < 10; i++) {
		printf("x[%d] = %f, w[%d] = %f\n", i, x[i], i, w[i]);
		sum += x[i] * w[i];
	}

	printf("------------------------------------------\n");
	printf("The result of the equation is : %f\n", sum);
	printf("The result after the step function is : %f\n", Step(sum));
	return 0;
}

float Step(float x) {
	if (x < 0){
		return 0.0;
	}
	else{
		return 1.0;
	}/*x<0なら0を、それ以外なら1を返却する。*/
}

void InStepOf(float x[], float w[]) {
	srand((unsigned)time(NULL));
	for(int i=0; i<10; i++) {
		x[i] = 2.0 * (rand() / (RAND_MAX + 1.0)) - 1.0;
		w[i] = 2.0 * (rand() / (RAND_MAX + 1.0)) - 1.0;
	}
}/*戻り値void、引数float型、入力ベクトルx,wを初期化する関数*/
