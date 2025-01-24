#include<stdio.h>

extern int iNo;   

int main(void)
{
    extern int iNo;
                                        
    printf("output of extern int iNo :%d",iNo);                //output of extern int iNo :10     
    return 0;
}

    int iNo=10;