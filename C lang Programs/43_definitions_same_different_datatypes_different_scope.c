#include<stdio.h>

void Fun(void);
int iNo=10;

int main(void)
{

    int iNo=20;

    printf("Value of iNo :%d\n",iNo);                        // Value of iNo :20

    {
        char No='A';
        printf("Value of char No :%d\n",No);                 //Value of char No :65
    }
    printf("Value of iNo :%d\n",iNo);                         //Value of iNo :20

    Fun();

    return 0;
}

void Fun(void)
{
    printf("Value of iNo :%d\n",iNo);                          // Value of iNo :20
}