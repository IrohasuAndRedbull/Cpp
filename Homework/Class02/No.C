#include <stdio.h>
int main() {
	int i=0;/*int型の変数i*/
	int* p;/*intへのポインタ型の変数p*/
	void* v;/*voidへのポインタ型変数v*/

	v = &i;
	printf("%d\n", (int) v);/*iへのポインタをvに代入し，vの値を表示する*/

	p = (int*)v;
	printf("%d\n", (int) p);/*vの値をpに代入し，pの値を表示する*/

	(* p)++;/*pが指す先をインクリメントする*/
	printf("%d\n", i);/*iの値を表示する*/

	return 0;
}
