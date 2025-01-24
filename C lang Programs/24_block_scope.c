#include<stdio.h>


int main(void)
{
    int iNo1 =10;
    printf("%d\n",iNo1);                               //10
    //printf("%d",iNo2);                              //error C2065: 'iNo2' : undeclared identifier
    {
        int iNo2 =20;
        printf("Inside Block iNo1 is :%d\n",iNo1);    //Inside Block iNo1 is :10
        printf("Inside Block iNo2 is %d\n",iNo2);     //Inside Block iNo2 is 20
    }
    printf("%d\n",iNo1);                               //10
    //printf("%d",iNo2);                                //error C2065: 'iNo2' : undeclared identifier


    return 0;
}