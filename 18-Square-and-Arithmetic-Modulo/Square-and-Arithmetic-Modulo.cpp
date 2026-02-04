#include <stdio.h>
#include <math.h>

/* 함수 선언 */
void Call_Addition(int arg1, int arg2);
void Call_Subtraction(int arg1, int arg2);
void Call_Multiplication(int arg1, int arg2);
void Call_Division(int arg1, int arg2);
void Call_Modulo(int arg1, int arg2);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 18-Square-and-Arithmetic-Modulo \n\n");

    int arg1;
    int arg1_sqrt;
    int arg2;
    int arg2_sqrt;

    printf("1번째 숫자 입력 : ");
    scanf_s("%i", &arg1);

    arg1_sqrt = arg1 * arg1;

    printf("2번째 숫자 입력 : ");
    scanf_s("%i", &arg2);

    arg2_sqrt = arg2 * arg2;

    Call_Addition(arg1_sqrt, arg2_sqrt);

    Call_Subtraction(arg1_sqrt, arg2_sqrt);

    Call_Multiplication(arg1_sqrt, arg2_sqrt);

    Call_Division(arg1_sqrt, arg2_sqrt);

    Call_Modulo(arg1_sqrt, arg2_sqrt);

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Addition(int param1, int param2)
{
    int result = param1 + param2;
    printf("\n덧셈 : %i + %i = %i\n", param1, param2, result);
}

void Call_Subtraction(int param1, int param2)
{
    int result = param1 - param2;
    printf("\n뺄셈 : %i - %i = %i\n", param1, param2, result);
}

void Call_Multiplication(int param1, int param2)
{
    int result = param1 * param2;
    printf("\n곱셈 : %i × %i = %i\n", param1, param2, result);
}

void Call_Division(int param1, int param2)
{
    int result = param1 / param2;
    printf("\n나눗셈 : %i ÷ %i = %i\n", param1, param2, result);
}

void Call_Modulo(int param1, int param2)
{
    int result = param1 % param2;
    printf("\n나머지 : %i %% %i = %i\n", param1, param2, result);
}