#include <stdio.h>

/* 함수 선언 */
void CallReturn(void);
void CallExit(void);

/* 프로그램 시작 */
int main(void)
{
    int result = 0;

    printf("----- Start \n");
    printf("\n");

    /* 흐름 종료 */
    // CallReturn();

    /* 프로그램 종료 */
    CallExit();

    /* 흐름 종료 */
    CallReturn();

    printf("----- End \n");

    /* 정상 종료 */
    return 0;
}

void CallReturn(void)
{
    printf("----- 흐름 종료\n");
    return;
}

void CallExit(void)
{
    printf("----- 프로그램 종료\n");
    exit();
}