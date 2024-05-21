#include<stdio.h>

int main(void) {
	int a, b, *c, *d;

	printf("정수 2개를 입력하시오(구분자는 콤마 사용). : ");
	scanf_s("%d, %d", &a, &b);

	c = &a;
	d = &b;
	
	printf("%d의 주소값 : %d\n", a, c);
	printf("%d의 주소값 : %d\n", b, d);
}