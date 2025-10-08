#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 팩토리얼 계산 함수
int factorial(int n)
{
    int res = 1; // 곱셈이니까 1로 초기화! 
    int i;

    // for (i is from 1 to n, increment 1)
    for (i = 1; i <= n; i++)
        res = res * i;  // res에 i를 계속 곱하여 누적시킨다. //결과값 res 

    return res; // 계산된 팩토리얼 결과를 main으로 돌려준 
}

// 조합 계산 함수
int combination(int n, int r)
{
    return factorial(n) / factorial(n - r) / factorial(r);   // factorial computation
}

int main(int argc, char *argv[])
{
    // variable declare
    int n, r;
    int res;

    // input data
    printf("Input n and r :");
    scanf("%d %d", &n, &r);
    
    //computer combination
    res = combination(n,r);
    
    //print result
    printf("combination result is : %d\n", res);

	return 0;
}

