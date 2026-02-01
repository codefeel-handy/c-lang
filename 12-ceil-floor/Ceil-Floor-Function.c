#include <stdio.h>
#include <math.h>

/* 함수 선언 */
void Call_Ceil_Float(float args);
void Call_Ceil_Double(double args);
void Call_Floor_Float(float args);
void Call_Floor_Double(double args);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 12-ceil-floor \n\n");

    float args;

    printf("숫자 입력 : ");
    scanf_s("%f", &args);

    printf("\n");

    Call_Ceil_Float(args);

    Call_Ceil_Double(args);

    Call_Floor_Float(args);

    Call_Floor_Double(args);

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Ceil_Float(float param)
{
    float result = ceil(param);
    printf("\Float 올림 값 : %f\n", result);
}

void Call_Ceil_Double(double param)
{
    double result = ceil(param);
    printf("\nDouble 올림 값 : %lf\n", result);
}

void Call_Floor_Float(float param)
{
    float result = floor(param);
    printf("\nFloat 내림 값 : %f\n", result);
}

void Call_Floor_Double(double param)
{
    double result = floor(param);
    printf("\nDouble 내림 값 : %lf\n", result);
}