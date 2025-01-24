#include<stdio.h>


int main(void)
{
    extern int iNo;                                        
   // extern float iNo;                                       // warning C4142: benign redefinition of type

    printf("output of extern int iNo :%d",iNo);               //output of extern int iNo :10
    return 0;
}

    int iNo=10;