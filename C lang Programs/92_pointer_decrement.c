#include<stdio.h>

int main(void)
{
    int Arr[]={'A','B','C','D','E'};
    char *pPtr=&Arr[4];                                          // warning C4133: 'initializing' : incompatible types - from 'int *' to 'char *'

    printf("Before decrement pPtr :%d\n",pPtr);                   //Before decrement pPtr :9435384
    printf("Before decrement *pPtr :%c\n",*pPtr);                 //Before decrement *pPtr :E

    --pPtr;

    printf("After decrement pPtr :%d\n",pPtr);                   //After decrement pPtr :9435383
    printf("After decrement *pPtr :%c\n",*pPtr);                 //After decrement *pPtr :         //No output print here

    return 0;
}

