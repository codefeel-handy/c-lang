#include <stdio.h>
#include <math.h>

/* 함수 선언 */
void Call_Decimal_Place_Float(float args);
void Call_Decimal_Place_Double(double args);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 13-Decimal-Place \n\n");

    float args_decimal;

    printf("소수점 숫자 입력 : ");
    scanf_s("%f", &args_decimal);

    printf("\n");

    Call_Decimal_Place_Float(args_decimal);

    Call_Decimal_Place_Double(args_decimal);

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Decimal_Place_Float(float p_decimal)
{
    printf("\Float 소숫점 표시 : %.2f\n", p_decimal);
}

void Call_Decimal_Place_Double(double p_decimal)
{
    printf("\Double 소숫점 표시 : %.2f\n", p_decimal);
}