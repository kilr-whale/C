#include<stdio.h>

int main(void) {
	int *poval, a;

	printf("Ű����� ���� 1���� �Է��ϼ���. : ");
	scanf_s("%d", &a);

	poval = &a;

	printf("Ű����� �Է��� ���� ����� �ּ�(16���� ǥ��) : %X\n", poval);
	printf("������ ���� *poval�� ����� ��(10���� ǥ��) : %d\n", *poval);
}