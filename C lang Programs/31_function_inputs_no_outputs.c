#include<stdio.h>

void Addition(int ,int);

int main(void)
{

    int iNo1;
    int iNo2;

    printf("Enter Two Numbers :\n");
    scanf("%d%d",&iNo1,&iNo2);

    Addition(iNo1,iNo2);


    return 0;
}

void Addition(int iNo1,int iNo2)
{
    int iAns;

    iAns=iNo1+iNo2;
    printf("In Addtion Function Answer is : %d",iAns);
}

/*
Enter Two Numbers :
10 20
In Addtion Function Answer is : 30
*/