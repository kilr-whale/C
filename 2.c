#include<stdio.h>

int main(void) {
	const float mile = 1.61;
	float km, mile2;

	printf("마일을 킬로미터로 환산하는 프로그램\n");
	printf("마일 입력(소수 둘째 자리) : ");
	scanf_s("%f", &mile2);

	km = mile2 * mile;

	printf("%.2f마일은 %.2fkm입니다.\n", mile2, km);
}