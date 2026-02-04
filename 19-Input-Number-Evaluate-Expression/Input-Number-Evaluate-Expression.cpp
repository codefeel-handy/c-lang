#include <stdio.h>
#include <math.h>

/* 함수 선언 */
void Call_Expression(int arg1, int arg2);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 18-Square-and-Arithmetic-Modulo \n\n");

    int arg1;
    int arg2;

    printf("1번째 숫자 입력 : ");
    scanf_s("%i", &arg1);

    printf("2번째 숫자 입력 : ");
    scanf_s("%i", &arg2);

    Call_Expression(arg1, arg2);

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Expression(int param1, int param2)
{
    printf("\n결과 : 5 * %i + 10 * %i = %i\n", param1, param2, 5 * param1 + 10 * param2);
}