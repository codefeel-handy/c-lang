#include <stdio.h>
#include <string.h>

/* 함수 선언 */
void Call_SafeStringConcatenationoutput(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 15.format-specifier-text-oputput \n\n");

    Call_SafeStringConcatenationoutput();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void Call_SafeStringConcatenationoutput(void)
{
    char input_text_1st[255];
    char input_text_2nd[255];

    printf("scanf_s 1번째 입력 : ");
    printf("=> ");
    fgets(input_text_1st, sizeof(input_text_1st), stdin);
    input_text_1st[strcspn(input_text_1st, "\n")] = '\0';

    printf("scanf_s 2번째 입력 : ");
    printf("=> ");
    fgets(input_text_2nd, sizeof(input_text_2nd), stdin);
    input_text_2nd[strcspn(input_text_2nd, "\n")] = '\0';

    strcat_s(input_text_1st, sizeof(input_text_1st), " ");
    strcat_s(input_text_1st, sizeof(input_text_2nd), input_text_2nd);

    printf("\n문자열 연결 출력 결과 : `%s`\n", input_text_1st);
}