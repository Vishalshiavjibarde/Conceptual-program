#include<stdio.h>

void Fun(int);

int main(void)
{

    int iNo=10;
    printf("before calling fun :%d\n",iNo);        //before calling fun :10
    Fun(iNo);
    printf("After calling fun :%d\n",iNo);         //After calling fun :10

    return 0;
}

void Fun(int iNo)
{
    printf("In Fun :%d\n",iNo);                      //In Fun :10
    iNo++;
    printf("Leaving Fun :%d\n",iNo);                 //Leaving Fun :11
}




