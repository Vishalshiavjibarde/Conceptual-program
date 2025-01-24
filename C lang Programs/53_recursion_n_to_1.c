#include<stdio.h>

void PrintNumbers(int);

int main(void)
{
    int iNo;
    printf("Enter Number :");
    scanf("%d",&iNo);

    PrintNumbers(iNo);

    return 0;
}


void PrintNumbers(int iNo)
{
    if(iNo==0)
        return;

    printf("%d\t",iNo);                        //5       4       3       2       1ss
    PrintNumbers(iNo-1);
}