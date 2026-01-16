#include <stdio.h>

/* 함수 선언 */
void CallExit(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 04-Exit \n\n");

    /* 프로그램 종료 */
    CallExit();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void CallExit(void)
{
    printf("----- 프로그램 종료\n\n");
    exit();
}