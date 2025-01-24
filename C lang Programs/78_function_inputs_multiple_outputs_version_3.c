#include<stdio.h>

void AddSub(int*,int*);

int main(void)
{
    int iNo1;
    int iNo2;
 
    printf("Enter First Number:\t");                //Enter First Number:     10
    scanf("%d",&iNo1);

    printf("Enter First Number:\t");               //Enter First Number:     2
    scanf("%d",&iNo2);

    AddSub(&iNo1,&iNo2);

    printf("Addition is :%d\n",iNo1);              //Addition is :12
    printf("Subtration is :%d\n",iNo2);          //Subtration is :8 

    return 0;
}

void AddSub(int *pPtr1,int *pPtr2)
{
    int iTemp;
    iTemp=*pPtr1;
    *pPtr1=*pPtr1+*pPtr2;
    *pPtr2=iTemp-*pPtr2;
}





