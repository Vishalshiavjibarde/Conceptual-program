#include<stdio.h>

int AddSub(int,int,int*);

int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter First Number :\t");            //Enter First Number :    30
    scanf("%d",&iNo1);

    printf("Enter First Number :\t");           //Enter First Number :    5
    scanf("%d",&iNo2);

    iSum=AddSub(iNo1,iNo2,&iDiff);

    printf("Addition is :%d\n",iSum);              //Addition is :35
    printf("Subtration is :%d\n",iDiff);          //Subtration is :25

    return 0;
}

int AddSub(int iNo1,int iNo2,int* piDiff)
{
    
    *piDiff=iNo1-iNo2;
    return iNo1+iNo2;
}


