#include<stdio.h>

int main(void) {
	int jeomsu, a, * b;

	replay: 
		printf("���� �Է� : ");
		scanf_s("%d", &jeomsu);

		if ((jeomsu < 0) || (jeomsu > 100)) {
			printf("%d��(��) ��� ������ �ƴմϴ�.\n", jeomsu);
			printf("���α׷��� �ٽ� �����ϼ���.\n");
			getchar();
			goto replay;
		}
		else {
			if ( 95<= jeomsu && jeomsu <= 100){
				a = 0;
			}
			else if (90 <= jeomsu && jeomsu < 95) {
				a = 1;
			}
			else if (85 <= jeomsu && jeomsu < 90) {
				a = 2;
			}
			else if (80 <= jeomsu && jeomsu < 85) {
				a = 3;
			}
			else if (75 <= jeomsu && jeomsu < 80) {
				a = 4;
			}
			else if (70 <= jeomsu && jeomsu < 75) {
				a = 5;
			}
			else if (65 <= jeomsu && jeomsu < 70) {
				a = 6;
			}
			else if (60 <= jeomsu && jeomsu < 65) {
				a = 7;
			}
			else {
				a = 8;
			}
			printf("�Է��� ���� : %d\n", jeomsu);
			switch (a) {
			case 0 :
				printf("��� : A+ ����\n");
				break;
			case 1 :
				printf("��� : A0 ����\n");
				break;
			case 2 :
				printf("��� : B+ ����\n");
				break;
			case 3 :
				printf("��� : B0 ����\n");
				break;
			case 4 :
				printf("��� : C+ ����\n");
				break;
			case 5 :
				printf("��� : C0 ����\n");
				break;
			case 6 :
				printf("��� : D+ ����\n");
				break;
			case 7 :
				printf("��� : D0 ����\n");
				break;
			default :
				printf("��� : F ����\n");
				break;
			}
		}
}