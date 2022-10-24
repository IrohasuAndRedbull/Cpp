#include <stdio.h>
int main() {
	const char* p= "suwarika";
	int num;
	printf("Please input an integer number :"); scanf_s("%d", &num);
	printf("The extracted character is %c\n", p[num-1]);

	return 0;
}
