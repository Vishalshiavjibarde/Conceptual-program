#include<stdio.h>

int main(void)
{
    int iNo=10;
   

    printf("value of iNo :%d\n",iNo);            //value of iNo :10

    printf("value of iNo-- :%d\n",iNo--);        //value of iNo-- :10
    printf("value of iNo :%d\n",iNo);            //value of iNo :9

    printf("value of --iNo :%d\n",--iNo);        //value of --iNo :8
    printf("value of iNo :%d\n",iNo);            //value of iNo :8


    return 0;
}