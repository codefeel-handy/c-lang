#include <stdio.h>

/* 함수 선언 */
void Call_Scanf_S(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 05-Scanf function \n\n");

    /* 프로그램 종료 */
    Call_Scanf_S();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void Call_Scanf_S(void)
{
    char input_text[255] = "";

    printf("너의 이름은~? 君の名は~? \n");
    printf("=> ");

    scanf_s("%s", input_text, (unsigned int)sizeof(input_text));

    printf("%s", input_text);
}