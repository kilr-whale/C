#include<stdio.h>

int main(void) {
	int a, b, c, d;

	printf("키보드로 정수값 3개를 입력하시오(구분자는 콤마 사용). : ");
	scanf_s("%d, %d, %d", &a, &b, &c, &d);

	printf("키보드로 입력한 정수값 3개는 %d, %d, %d\n", a, b, c);

	d = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	printf("그 중에서 최댓값은 %d", d);
}