#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// 두 개의 정수를 더하는 함수
int sumTwo(int a, int b)
{
    return (a + b);
}

// 정수의 제곱을 계산하는 함수
int square(int n)
{
    return (n * n);
}

// 두 개의 정수 중 큰 수를 반환하는 함수
int get_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(int argc, char *argv[])
{
    printf("sum two result is %i\n", sumTwo(2, 3));   
    printf("square result is %i\n", square(5));      
    printf("getmax result is %i\n", get_max(10, 13));

    return 0;
}

