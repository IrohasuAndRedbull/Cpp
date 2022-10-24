#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void plot(double y) {
	for (int i=-20; i<=20; i++) {
		if (i-0.5<y*20 && i+0.5>y*20) printf("*");
		else if (i == 0) printf("|");
		else printf(" ");
	}
	printf("\n");
}

int main() {
	double i = 0.0;

	for (i = -M_PI; i <= M_PI; i = i + (M_PI / 10) ){
		plot(sin(i));
	}
}
