#include<stdio.h>

void Addition(void);


int main(void)
{
    Addition();

    return 0;
}

void Addition(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&iNo1,&iNo2);
    iAns=iNo1+iNo2;
    printf("Answer is : %d\n",iAns);
}

/*
Enter Two Numbers :
10 20
Answer is : 30
*/