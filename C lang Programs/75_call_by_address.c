#include<stdio.h>

void Fun(int *);

int main(void)
{
    int iNo=10;
    printf("Before Calling Fun,%d\n",iNo);       //Before Calling Fun,10
    Fun(&iNo);
    printf("After Calling Fun ,%d\n",iNo);      //After Calling Fun ,11
}

void Fun(int* pPtr)
{
    printf("In Fun,%d\n",*pPtr);                //In Fun,10
    (*pPtr)++;
    printf("Leaving Fun,%d\n",*pPtr);           //Leaving Fun,11
}