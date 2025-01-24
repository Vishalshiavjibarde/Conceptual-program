#include<stdio.h>   

int main(void)
{
    int iNo=10;
    //int iNo=20;                   //error C2374: 'iNo' : redefinition; multiple initialization
                                        
    printf("output of int iNo :%d",iNo);     //output of int iNo :10
    return 0;
}