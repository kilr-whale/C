#include<stdio.h>

int main(void) {
	int a, b, *c, *d;

	printf("���� 2���� �Է��Ͻÿ�(�����ڴ� �޸� ���). : ");
	scanf_s("%d, %d", &a, &b);

	c = &a;
	d = &b;
	
	printf("%d�� �ּҰ� : %d\n", a, c);
	printf("%d�� �ּҰ� : %d\n", b, d);
}