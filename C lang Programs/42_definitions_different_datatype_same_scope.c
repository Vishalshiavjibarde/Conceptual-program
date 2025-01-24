#include<stdio.h>   

int main(void)
{
    int iNo=10;
  //  float iNo=99.99f;                   //warning C4142: benign redefinition of type    // error C2374: 'iNo' : redefinition; multiple initialization
                                        
    printf("output of iNo :%d",iNo);   //output of iNo :10
    return 0;
}