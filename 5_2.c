#include<stdio.h>

int main(void) {
	int a, b, c, d;

	printf("Ű����� ������ 3���� �Է��Ͻÿ�(�����ڴ� �޸� ���). : ");
	scanf_s("%d, %d, %d", &a, &b, &c, &d);

	printf("Ű����� �Է��� ������ 3���� %d, %d, %d\n", a, b, c);

	d = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	printf("�� �߿��� �ִ��� %d", d);
}