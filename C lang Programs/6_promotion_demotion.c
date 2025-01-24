#include<stdio.h>

int main(void)
{
    int iAns;
    iAns=2*3.75+5/2;
    printf("Ans is :%d",iAns);       // Ans is :9
    return 0;
}

/*
   iAns=((2*3.75)+(5/2)) ;    //promotion of 2 to 2.00
       = 7.50+(5/2);
       = 7.50+2;              //promotion of 2 to 2.00
       =9.50                 //demotion of 9.50 to 9
       =9
*/