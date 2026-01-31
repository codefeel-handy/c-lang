#include <stdio.h>

/* 함수 선언 */
void Call_Number_In_Subtraction(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 10 - Number In Subtraction \n\n");

    Call_Number_In_Subtraction();
    printf("\n");

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Number_In_Subtraction(void)
{
    int number_1;
    int number_2;
    int number_result;

    printf("1번째 숫자 입력 : \n");
    printf("=> ");
    scanf_s("%i", &number_1);

    printf("2번째 숫자 입력 : \n");
    printf("=> ");
    scanf_s("%i", &number_2);

    number_result = number_1 - number_2;

    printf("\n뺄셈 결과 : %i - %i = %i", number_1, number_2, number_result);
}