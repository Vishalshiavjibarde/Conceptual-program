#include<stdio.h>

int  Addition(int ,int);

int main(void)
{

    int iNo1;
    int iNo2;
    int iAns;

    printf("Enter Two Numbers :\n");
    scanf("%d%d",&iNo1,&iNo2);

   iAns= Addition(iNo1,iNo2);

    printf("Addition is :%d",iAns);

    return 0;
}

int Addition(int iNo1,int iNo2)
{
    int iAns;

    iAns=iNo1+iNo2;
    return iAns;
}

/*
Enter Two Numbers :
10 20
Addition is :30
*/