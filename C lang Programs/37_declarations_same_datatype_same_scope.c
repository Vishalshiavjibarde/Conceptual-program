#include<stdio.h>


int main(void)
{
    extern int iNo;
    extern int iNo;                                           //Allowed by compiler

    printf("output of extern int iNo :%d",iNo);               //output of extern int iNo :0
    return 0;
}

    int iNo;