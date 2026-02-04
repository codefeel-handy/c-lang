#include <stdio.h>
#include <string.h>

/* 함수 선언 */
void Call_SafeStringBufferOutput(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 17.Safe_String_Buffer_Output \n\n");

    Call_SafeStringBufferOutput();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void Call_SafeStringBufferOutput(void)
{
    char input_text_1st[255];
    char input_text_2nd[255];
    char input_buffer[255];

    printf("scanf_s 1번째 입력 : ");
    printf("=> ");
    fgets(input_text_1st, sizeof(input_text_1st), stdin);
    input_text_1st[strcspn(input_text_1st, "\n")] = '\0';

    printf("scanf_s 2번째 입력 : ");
    printf("=> ");
    fgets(input_text_2nd, sizeof(input_text_2nd), stdin);
    input_text_2nd[strcspn(input_text_2nd, "\n")] = '\0';

    sprintf_s(input_buffer, sizeof(input_buffer), "%s %s", input_text_1st, input_text_2nd);

    printf("\n버퍼 문자열 출력 결과 : `%s`\n", input_buffer);
}