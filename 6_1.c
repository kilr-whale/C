#include<stdio.h>
#include<ctype.h>

int main(void) {
	char op;
replay:

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &op, sizeof(op));

	if (isupper(op)) {
		printf("�Է��� %c��(��) \"���ĺ� �빮��\"�Դϴ�.", op);
	}
	else if (islower(op)) {
		printf("�Է��� %c��(��) \"���ĺ� �ҹ���\"�Դϴ�.", op);
	}
	else if (isdigit(op)) {
		printf("�Է��� %c��(��) \"����\"�Դϴ�.", op);
	}
	else {
		printf("�Է��� %c��(��) \"��Ÿ ����\"�Դϴ�.\n", op);
		printf("���α׷��� �ٽ� �����ϼ���.\n");
		getchar();
		goto replay;
	}
	return 0;
}