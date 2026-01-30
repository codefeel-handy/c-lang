#include <stdio.h>

/* 프로그램 시작 */
int main(void)
{
    printf("\n----- Start 08 - sizeof function \n");

    printf("\n");
    char _char = 10;
    printf("data-type : %s, type-size = %zu byte, value-size = %zu byte\n", "char", sizeof(char), sizeof(_char));

    printf("\n");
    short _short = 10;
    printf("data-type : %s, type-size = %zu byte, value-size = %zu byte\n", "short", sizeof(short), sizeof(_short));

    printf("\n");
    int _int = 10;
    printf("data-type : %s, type-size = %zu byte, value-size = %zu byte\n", "int", sizeof(int), sizeof(_int));

    printf("\n");
    long long _long_long = 10;
    printf("data-type : %s, type-size = %zu byte, value-size = %zu byte\n", "long long", sizeof(long long), sizeof(_long_long));

    printf("\n----- End \n");

    /* 정상 종료 */
    return 0;
}