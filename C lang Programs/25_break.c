#include<stdio.h>


int main(void)
{
    int iCounter;

    for(iCounter=1;iCounter<10;iCounter++)
    {
        if(iCounter%2==0)
           break;
        printf("icounter is : %d",iCounter);

    }
    return 0;
}

/*
icounter is : 1
*/