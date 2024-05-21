#include<stdio.h>

int main(void) {
	int jeomsu, a, * b;

	replay: 
		printf("점수 입력 : ");
		scanf_s("%d", &jeomsu);

		if ((jeomsu < 0) || (jeomsu > 100)) {
			printf("%d는(은) 허용 구간이 아닙니다.\n", jeomsu);
			printf("프로그램을 다시 실행하세요.\n");
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
			printf("입력한 점수 : %d\n", jeomsu);
			switch (a) {
			case 0 :
				printf("등급 : A+ 학점\n");
				break;
			case 1 :
				printf("등급 : A0 학점\n");
				break;
			case 2 :
				printf("등급 : B+ 학점\n");
				break;
			case 3 :
				printf("등급 : B0 학점\n");
				break;
			case 4 :
				printf("등급 : C+ 학점\n");
				break;
			case 5 :
				printf("등급 : C0 학점\n");
				break;
			case 6 :
				printf("등급 : D+ 학점\n");
				break;
			case 7 :
				printf("등급 : D0 학점\n");
				break;
			default :
				printf("등급 : F 학점\n");
				break;
			}
		}
}