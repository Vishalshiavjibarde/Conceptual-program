#include<stdio.h>

void Fun(void);


int main(void)
{
    extern int g_iNo;

    printf("in main : %d\n",g_iNo);               //in main : 10

    Fun();

    return 0;

}