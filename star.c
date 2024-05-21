#include<stdio.h>

int main(void) {
	int num, cnt, star;

	for (num = 1; num <= 5; num++) {
		for (cnt = 1; cnt <= num; cnt++) {
			printf("*");
		}
		printf("\n");

		for (star = 5; star >= 1; star--) {
			printf("*");
		}
		printf("\n");
	}
}