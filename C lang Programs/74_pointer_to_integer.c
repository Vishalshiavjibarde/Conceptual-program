#include<stdio.h>

int main(void)
{
    int iNo=10;
    int* pPtr=&iNo;


    printf("value of iNo is :%d\n",iNo);                          //value of iNo is :10

    printf("value of &iNo is :%d\n",&iNo);                       //value of &iNo is :13106912

    printf("value of pPtr is :%d\n",pPtr);                       //value of pPtr is :13106912

    printf("value of &pPtr is :%d\n",&pPtr);                    //value of &pPtr is :13106908

    printf("value of *pPtr is :%d\n",*pPtr);                    //value of *pPtr is :10

    *pPtr=20;

    printf("value of *pPtr is :%d\n",*pPtr);                    //value of *pPtr is :20

    return 0;
}






