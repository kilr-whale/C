#include<stdio.h>
#define inch 2.54

int main(void) {

	float result, inch2;

	printf("인치를 센티미터로 환산하는 프로그램\n");
	printf("인치 입력(소수 둘째 자리) : ");
	scanf_s("%f", &inch2);
	result = inch2 * inch;

	printf("%.2f인치는 %.2fcm입니다.\n", inch2, result);
}