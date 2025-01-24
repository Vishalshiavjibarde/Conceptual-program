#include<stdio.h>

void AddSub(int,int,int*,int*);

int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter First Number :\t");            //Enter First Number :    15
    scanf("%d",&iNo1);

    printf("Enter First Number :\t");           //Enter First Number :    2
    scanf("%d",&iNo2);

    AddSub(iNo1,iNo2,&iSum,&iDiff);

    printf("Addition is :%d\n",iSum);              //Addition is :17
    printf("Subtration is :%d\n",iDiff);          //Subtration is :13

    return 0;
}

void AddSub(int iNo1,int iNo2,int* piSum,int* piDiff)
{
    *piSum=iNo1+iNo2;
    *piDiff=iNo1-iNo2;
}