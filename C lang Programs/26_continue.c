#include<stdio.h>


int main(void)
{
    int iCounter;

    for(iCounter=1;iCounter<10;iCounter++)
    {
        if(iCounter%2==0)
           continue;
        printf("icounter is : %d\n",iCounter);

    }
    return 0;
}

/*
icounter is : 1
icounter is : 3
icounter is : 5
icounter is : 7
icounter is : 9
*/