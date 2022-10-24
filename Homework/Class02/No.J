#include <stdio.h>
#include <stdlib.h> /*乱数を使用するため*/
#include <time.h> /*乱数を時刻によって初期化するため*/

float Step(float);
void InStepOf(float[], float[]);/*関数のプロトタイプ宣言、関数名はアッパーキャメルケース*/

int main() {
	float x[10], w[10];/*float型の1次元配列、要素数10*/
	float sum = 0.0; /*総和*/

	InStepOf(x, w); /*配列x,wをランダムで初期化*/

	for (int i = 0; i < 10; i++) {
		printf("x[%d] = %f, w[%d] = %f\n", i, x[i], i, w[i]);
		sum += x[i]*w[i];
	}/*配列の表示と積の総和を計算*/

	printf("------------------------------------------\n");
	printf("The result of the equation is : %f\n", sum);
	printf("The result after the step function is : %f\n", Step(sum));/*結果の出力*/
	return 0;
}

float Step(float x) {
	if (x < 0){
		return 0.0;
	}
	else{
		return 1.0;
	}/*x<0なら0を、それ以外なら1を返却する関数*/
}

void InStepOf(float x[], float w[]) {
	srand((unsigned)time(NULL));
	for(int i=0; i<10; i++) {
		x[i] = 2.0 * (rand() / (RAND_MAX + 1.0)) - 1.0;
		w[i] = 2.0 * (rand() / (RAND_MAX + 1.0)) - 1.0;
	}
}/*戻り値void、引数float型、入力ベクトルx,wをランダムに初期化する関数*/
