#include<stdio.h>

int main(void)
{
    int Arr[]={10,20,30,40,50};

    int *pPtr=&Arr[0];

    printf("Before increment &pPtr :%d\n",&pPtr);                 //Before increment &pPtr :7338228
    printf("Before increment pPtr :%d\n",pPtr);                   //Before increment pPtr :7338204
    printf("Before increment *pPtr :%d\n",*pPtr);                 //Before increment *pPtr :10

    ++pPtr;

    printf("After increment &pPtr :%d\n",&pPtr);                 //After increment &pPtr :7338228
    printf("After increment pPtr :%d\n",pPtr);                   //After increment pPtr :7338208
    printf("After increment *pPtr :%d\n",*pPtr);                 //After increment *pPtr :20

    return 0;
}