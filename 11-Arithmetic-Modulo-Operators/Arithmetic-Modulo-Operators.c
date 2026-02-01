#include <stdio.h>

/* 함수 선언 */
void Call_Addition(int arg1, int arg2);
void Call_Subtraction(int arg1, int arg2);
void Call_Multiplication(int arg1, int arg2);
void Call_Division(int arg1, int arg2);
void Call_Modulo(int arg1, int arg2);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 11-Arithmetic-Modulo-Operators \n\n");

    int arg1;
    int arg2;

    printf("1번째 숫자 입력 : ");
    scanf_s("%i", &arg1);

    printf("2번째 숫자 입력 : ");
    scanf_s("%i", &arg2);

    Call_Addition(arg1, arg2);

    Call_Subtraction(arg1, arg2);

    Call_Multiplication(arg1, arg2);

    Call_Division(arg1, arg2);

    Call_Modulo(arg1, arg2);

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