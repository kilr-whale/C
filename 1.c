#include<stdio.h>
#define inch 2.54

int main(void) {

	float result, inch2;

	printf("��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
	printf("��ġ �Է�(�Ҽ� ��° �ڸ�) : ");
	scanf_s("%f", &inch2);
	result = inch2 * inch;

	printf("%.2f��ġ�� %.2fcm�Դϴ�.\n", inch2, result);
}