#include<stdio.h>


int main(void)
{
    int iNo=10;

    const int *pPtr=&iNo;

    // ++iNo;
    // ++(*pPtr);

    printf("++iNo is : %d\n",++iNo);          //++iNo is : 11
   // printf("++(*pPtr) is : %d",++(*pPtr));    ///LINK : fatal error LNK1561: entry point must be defined
    return 0;
}


