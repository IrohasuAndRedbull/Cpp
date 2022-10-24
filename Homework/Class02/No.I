#include <stdio.h>

float Step(float);
void InStepOf(float[]); /*関数のプロトタイプ宣言、関数名はアッパーキャメルケース*/

int main() {
	float x[21]; /*float型の1次元配列の定義*/
	InStepOf(x); /*-1から1で0.1刻みで初期化*/
	for (int i=0; i<21; i++) printf("x[%d] = %f -> (Step function) -> %f\n", i, x[i], Step(x[i]));
	/*配列xとstep関数にいれた結果を出力する*/
	return 0;
}

float Step(float x){/*引数をfloat型の変数x,戻り値もfloat型*/
	if (x < 0) {
		return 0.0;
	}else{
		return 1.0;
	}
}/*x<0なら0を、それ以外なら1を返却する。*/

void InStepOf(float x[]){
	for (int i=0; i<21; i++){
		x[i]=(double)((double)i-10)/10;
	}/*-1.0から1.0の実数で初期化する*/
}/*引数をfloat型のポインタ変数とし、戻り値をvoid型*/
