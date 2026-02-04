#include <stdio.h>
#include <string.h>

/* 함수 선언 */
void ClearFormatSpecifierTextOutput(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 15.format-specifier-text-oputput \n\n");

    ClearFormatSpecifierTextOutput();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void ClearFormatSpecifierTextOutput(void)
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

    printf("\n서식 지정자 사용 문자열 출력 결과 : `%s %s`\n", input_text_1st, input_text_2nd);
}