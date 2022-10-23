#include <stdio.h>
int main() {
	int i=0;
	int* p;
	void* v;

	v = &i;
	printf("%d\n", (int) v);/*iへのポインタをvに代入し，vの値を表示する*/

	p = (int*)v;
	printf("%d\n", (int) p);/*vの値をpに代入し，pの値を表示する*/

	(* p)++;/*pが指す先をインクリメントする*/
	printf("%d\n", i);/*iの値を表示する*/

	return 0;
}
