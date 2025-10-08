#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void printstar(int n)    // 매개변수 n에 출력할 개수 전달
{
    int i;
    for (i = 0; i < n; i++)
        printf("*");
    printf("\n");
}

int main(void)
{
    int i;

    printstar(10);
    printstar(10);
    printstar(10);

    return 0;
}
