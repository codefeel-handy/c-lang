#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 함수 선언 */
void CallScanf(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 05-Scanf function \n\n");

    /* 프로그램 종료 */
    CallScanf();

    printf("\n----- End \n\n");

    /* 정상 종료 */
    return 0;
}

void CallScanf(void)
{
    char name[255] = "";

    printf("너의 이름은~? 君の名は~? \n");
    printf("=> ");

    scanf("%s", name);

    printf("%s", name);
}