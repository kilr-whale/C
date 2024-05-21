#include <stdio.h>
int mian()
{
	int num1, num2, num3, num4;
	float num5;

	printf("정수를 입력하세요 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	num4 = num1 + num2 + num3;
	num5 = (num1 + num2 + num3) / 3;

	printf("합 : %d", num4);
	printf("평균 : %.2f", num5);

	return 0;

}