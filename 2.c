#include<stdio.h>

int main(void) {
	const float mile = 1.61;
	float km, mile2;

	printf("������ ų�ι��ͷ� ȯ���ϴ� ���α׷�\n");
	printf("���� �Է�(�Ҽ� ��° �ڸ�) : ");
	scanf_s("%f", &mile2);

	km = mile2 * mile;

	printf("%.2f������ %.2fkm�Դϴ�.\n", mile2, km);
}