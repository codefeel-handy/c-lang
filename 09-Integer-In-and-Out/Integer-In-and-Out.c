#include <stdio.h>

/* 함수 선언 */
void Call_Integer_In_Out(void);

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 09 - Integer In and Out \n\n");

    Call_Integer_In_Out();
    printf("\n");

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}

void Call_Integer_In_Out(void)
{
    int _number;

    printf("정수를 입력 : \n");
    printf("=> ");
    scanf_s("%i", &_number);
    
    printf("\n입력된 숫자 정수 : %i", _number);

    return 0;
}