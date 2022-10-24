#define _USE_MATH_DEFINES/*～2019年において、math.hにM_PIが含まれなくなった？のでM_PIを使用するために用いる*/
#include <stdio.h>
#include <math.h>/*円周率をM_PIとして使用するため*/

void plot(double y) {/*関数を用いてsin関数をプロットする*/
	for (int i=-20; i<=20; i++) {/*軸を-20から20でとる*/
		if (i-0.5<y*20 && i+0.5>y*20) printf("*");/*yに20をかけて、+-0.5の範囲に当てはまるところに*を打つ*/
		else if (i == 0) printf("|");/*軸の中央には縦線を引く、ただし*と被っていれば*を優先する*/
		else printf(" ");/*上の2つに該当しない部分は空白であるため、空白を出力*/
	}
	printf("\n");/*改行、この一連の流れをmainメソッド内の繰り返し処理分繰り返す。*/
}

int main() {
	double i = 0.0;/*iの初期化*/

	for (i=-M_PI; i<=M_PI; i=i+(M_PI/10) ){/*20回繰り返し処理がしたいので、π/10ずつ足していく*/
		plot(sin(i));/*plot関数にsinを引数として実行する*/
	}
}
