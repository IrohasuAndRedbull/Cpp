#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 5
int count = 0;
int reverse(int renum[]) {/*xは元の配列のn番目の要素、countはi*/

	for (int i = NUMBER-1; i >=0; i--) {
		printf(" %d ", renum[i]);
	}
	
	return 0;
}

int main() {
	srand(0);
	int num[NUMBER] = {};
	for (int i = 0; i < NUMBER; i++) {
		num[i] = rand();
		printf(" %d ", num[i]);
	}

	printf("\n");

	reverse(num);

	return 0;

}
