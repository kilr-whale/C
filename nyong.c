#include <stdio.h>
int mian()
{
	int num1, num2, num3, num4;
	float num5;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	num4 = num1 + num2 + num3;
	num5 = (num1 + num2 + num3) / 3;

	printf("�� : %d", num4);
	printf("��� : %.2f", num5);

	return 0;

}