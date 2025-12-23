#include <stdio.h>

/* 함수 선언 */
void CallReturn1(void);
int  CallReturn2(void);
int CallReturn3(void);
int CallReturn4(void);
int CallReturn5(void);

/* 프로그램 시작 */
int main(void)
{
    int result = 0;

    printf("----- Start \n");
    printf("\n");

    /* 프로그램 단순 종료 */
    CallReturn1();
    printf("리턴 결과: 없음\n");
    printf("\n");

    /* 프로그램 정상 종료 */
    result = CallReturn2();
    printf("리턴 결과: %d\n", result);
    printf("\n");

    /* 프로그램 실패/에러 종료 */
    result = CallReturn3();
    printf("리턴 결과: %d\n", result);
    printf("\n");

    /* 프로그램 사용자 정의 종료 */
    result = CallReturn4();
    printf("리턴 결과: %d\n", result);
    printf("\n");

    /* 프로그램 사용자 정의 종료 */
    result = CallReturn5();
    printf("리턴 결과: %d\n", result);
    printf("\n");

    
    printf("----- End \n");

    /* 정상 종료 */
    return 0;
}

void CallReturn1(void)
{
    printf("----- 단순 종료 - 1\n");
    return;

    printf("----- 단순 종료 - 2\n");
}

int CallReturn2(void)
{
    printf("----- 정상 / 완료 종료 - 1\n");
    return 0;

    printf("----- 정상 / 완료 종료 - 2\n");
}

int CallReturn3(void) 
{
    printf("----- 실패 / 에러 종료 - 1\n");
    return -1;

    printf("----- 실패 / 에러 종료 - 2\n");
}

int CallReturn4(void)
{
    printf("----- 조건 상태 / 사용자 정의 종료 - 1\n");
    return 1;

    printf("----- 조건 상태 / 사용자 정의 종료 - 2\n");
}

int CallReturn5(void)
{
    printf("----- 조건 상태 / 사용자 정의 종료 - 1\n");
    return 404;

    printf("----- 조건 상태 / 사용자 정의 종료 - 2\n");
}