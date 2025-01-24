#include<stdio.h>


int main(void)
{
    int iNo=10;

    int *pPtr=&iNo;

    // ++iNo;
    // ++(*pPtr);

    printf("++iNo is : %d\n",++iNo);          //++iNo is : 11
    printf("++(*pPtr) is : %d",++(*pPtr));    //++(*pPtr) is : 12

    return 0;
}


