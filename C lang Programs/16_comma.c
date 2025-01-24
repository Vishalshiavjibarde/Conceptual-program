#include<stdio.h>

int Fun(void);


int main(void)
{
    int iAns1,iAns2,iAns;   //Saperator
    iAns1=10,20,30;
    iAns2=(10,20,30);

    printf("value of iAns1:%d\n Value of iAns2:%d\n",iAns1,iAns2);  //Saperator
    //value of iAns1:10
    //Value of iAns2:30
    
    iAns=Fun();
    printf("value of iAns :%d\n",iAns);  //Saperator
    //value of iAns :0

    return 0;

}


int Fun(void)
{
    return 1,-1,0;
}