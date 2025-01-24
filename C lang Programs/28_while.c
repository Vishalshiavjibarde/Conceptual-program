#include<stdio.h>

int main(void)
{
    int iCounter;
    iCounter=0;
    while (iCounter<3)
    {
        printf("%d\n",iCounter);
        iCounter++;
    }
    /*
    0
    1
    2
    */


    iCounter=3;
    while (iCounter<3)
    {
        printf("%d\n",iCounter);
        iCounter++;
    }

    return 0;
}