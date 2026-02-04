#include <stdio.h>

/* 함수 선언 */
void Call_Scanf_S(void);
void Call_Fgets(void);
void ClearBuffer(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 14-text-input-output \n\n");

    Call_Scanf_S();

    printf("\n");

    ClearBuffer();

    Call_Fgets();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void Call_Scanf_S(void)
{
    char input_text[255];

    printf("scanf_s : 너의 이름은~? 君の名は~? ");
    printf("=> ");
    scanf_s("%s", input_text, (unsigned int)sizeof(input_text));

    printf("\n나의 이름은 `%s`이다.\n", input_text);
}

void Call_Fgets(void)
{
    char input_text[255];

    printf("fgets : 너의 이름은~? 君の名は~? ");
    printf("=> ");
    fgets(input_text, sizeof(input_text), stdin);
    input_text[strcspn(input_text, "\n")] = '\0';

    printf("\n나의 이름은 `%s`이다.\n", input_text);
}

void ClearBuffer(void) {
    while (getchar() != '\n');
}