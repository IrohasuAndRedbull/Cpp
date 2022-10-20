#include <stdio.h>
int main() {
	int i=0;
	int *p;
	
	p = &i;/*iへのポインタをpに代入*/

	printf("i=%d\n&i=%p\np=%p\n*p=%d\n", i, &i, p, *p);

	*p += 1;/**pに1を足す*/

	printf("--------------\n");

	printf("i=%d\n&i=%p\np=%p\n*p=%d\n", i, &i, p, *p);
	return 0;

}
