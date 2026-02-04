#include <stdio.h>
#include <math.h>

/* 함수 선언 */
void Call_Expression(int param1, int param2, int param3, int param4, int param5);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 20-Input-Number-Average-Calculation \n\n");

    int arg1 = 0;
    int arg2 = 0;
    int arg3 = 0;
    int arg4 = 0;
    int arg5 = 0;

    printf("5개 숫자 입력 : ");
    scanf_s("%i %i %i %i %i", &arg1, &arg2, &arg3, &arg4, &arg5);

    Call_Expression(arg1, arg2, arg3, arg4, arg5);

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Expression(int param1, int param2, int param3, int param4, int param5)
{
    double average = (param1 + param2 + param3 + param4 + param5) / 5;
    printf("\n입력된 숫자: %i, %i, %i, %i, %i, 평균 : %f\n", param1, param2, param3, param4, param5, average);
}