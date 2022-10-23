#include <stdio.h>
int main() {
	const char* p[] = {"s","u", "w", "a", "r", "i", "k", "a"};
	int num;
	
	printf("Please input an integer number :"); scanf_s("%d", &num);
	printf("The extracted character is %s\n", p[num-1]);

	return 0;
}
