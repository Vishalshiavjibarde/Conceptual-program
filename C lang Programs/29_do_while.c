#include<stdio.h>

int main(void)
{
    int iCounter;
    iCounter=0;
    do
    {
        printf("%d\n",iCounter);
        iCounter++;
    } while (iCounter<3);

    /*
    0
    1
    2
    */

    iCounter=3;
    do
    {
        printf("%d\n",iCounter);   //3
        iCounter++;
    } while (iCounter<3);


    return 0;
}