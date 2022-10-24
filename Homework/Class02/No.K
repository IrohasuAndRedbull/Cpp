#include <stdio.h>
#include <stdlib.h> /*乱数を使用するため*/
#include <time.h> /*乱数を時刻によって初期化するため*/
#define NUMBER 5 /*配列の個数をマクロによって定義しました*/
int count = 0;
int reverse(int renum[]) {
	for (int i=NUMBER-1; i>=0; i--) {
		printf(" %d ", renum[i]);
	}/*引数として持ってきた配列を、繰り返し処理によって逆にして出力*/
	return 0;
}

int main() {
	int num[NUMBER]={}; /*配列の定義*/
	InStepOf(num);/*配列をランダムに初期化する関数の実行*/
	for (int i=0; i<NUMBER;i++) printf(" %d ", num[i]);/*配列の要素を繰り返し処理によって表示する*/
	printf("\n");/*改行*/
	
	reverse(num);/*配列を逆順にする関数の実行*/
	return 0;
}
void InStepOf(int x[]) { /*引数の配列をランダムで初期化する関数*/
	srand((unsigned)time(NULL)); /*乱数を現在時刻で初期化*/
	for (int i=0; i<5; i++) x[i]=rand(); /*配列の要素を乱数によって決める*/
}
