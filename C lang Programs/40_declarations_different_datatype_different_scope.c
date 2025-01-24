#include<stdio.h>

extern int iNo;   

int main(void)
{
   // extern float iNo;                                  // warning C4142: benign redefinition of type
                                        
    printf("output of extern int iNo :%d",iNo);  
    return 0;
}

    int iNo=10;