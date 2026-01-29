#include <stdio.h>

/* 함수 선언 */
void Call_Fgets_S(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 07-Fgets function \n\n");

    /* 프로그램 종료 */
    Call_Fgets_S();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void Call_Fgets_S(void)
{
    char str[100];

    printf("너의 이름은~? 君の名は~? \n");
    printf("=> ");
    fgets(str, sizeof(str), stdin);

    printf("입력된 문자열: %s", str);
    return 0;
}