#include<stdio.h>
#include<ctype.h>

int main(void) {
	char op;
replay:

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &op, sizeof(op));

	if (isupper(op)) {
		printf("입력한 %c는(은) \"알파벳 대문자\"입니다.", op);
	}
	else if (islower(op)) {
		printf("입력한 %c는(은) \"알파벳 소문자\"입니다.", op);
	}
	else if (isdigit(op)) {
		printf("입력한 %c는(은) \"숫자\"입니다.", op);
	}
	else {
		printf("입력한 %c는(은) \"기타 문자\"입니다.\n", op);
		printf("프로그램을 다시 시작하세요.\n");
		getchar();
		goto replay;
	}
	return 0;
}