#include <stdio.h>
int main() {
	int num1 = 0, num2 = 0, num3 = 0;
	int* p_num1=&num1;
	int* p_num2=&num2;
	int* p_num3=&num3;

	printf("input a first integer number :"); scanf_s("%d", &num1);
	printf("input a second integer number :"); scanf_s("%d", &num2);
	printf("input a third integer number :"); scanf_s("%d", &num3);

	if (*p_num3 >= *p_num1 && *p_num2 >= *p_num1) printf("The minimum number is %d\n", *p_num1);
	if (*p_num1 >= *p_num2 && *p_num3 >= *p_num2) printf("The minimum number is %d\n", *p_num2);
	if (*p_num1 >= *p_num3 && *p_num2 >= *p_num3) printf("The minimum number is %d\n", *p_num3);

	return 0;
}
