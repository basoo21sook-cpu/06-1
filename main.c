#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ���丮�� ��� �Լ�
int factorial(int n)
{
    int res = 1; // �����̴ϱ� 1�� �ʱ�ȭ! 
    int i;

    // for (i is from 1 to n, increment 1)
    for (i = 1; i <= n; i++)
        res = res * i;  // res�� i�� ��� ���Ͽ� ������Ų��. //����� res 

    return res; // ���� ���丮�� ����� main���� ������ 
}

// ���� ��� �Լ�
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

