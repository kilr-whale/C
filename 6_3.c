#include<stdio.h>

int main(void) {
	char season;
replay:

	printf("������ ������ ���ĺ� �Է� : ");
	scanf_s("%c", &season);

	switch (season) {
	case 'A' : case 'a' :
		printf("���� : ��\n");
		printf("���� : ���� ���۴�\n");
		break;
	case 'S': case 's':
		printf("���� : ����\n");
		printf("���� : ������ �Ѵ�\n");
		break;
	case 'D': case 'd':
		printf("���� : ����\n");
		printf("���� : �߼��� �Ѵ�\n");
		break;
	case 'F': case 'f':
		printf("���� : ��\n");
		printf("���� : ���� ���۴�\n");
		break;
	default :
		printf("������ �ʴ� ���ĺ��Դϴ�.\n");
		printf("��ҹ��� ���� ���� A, S, D, F�� ����մϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
		getchar();
		goto replay;
	}

}