#include<stdio.h>

int main(void) {
	int *poval, a;

	printf("키보드로 정수 1개를 입력하세요. : ");
	scanf_s("%d", &a);

	poval = &a;

	printf("키보드로 입력한 값이 저장된 주소(16진수 표기) : %X\n", poval);
	printf("포인터 변수 *poval에 저장된 값(10진수 표기) : %d\n", *poval);
}