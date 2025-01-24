#include<stdio.h>

int main(void)
{
    int iAns;
    iAns=10<20;
    printf("Ans of 10<20 :%d\n",iAns);         //Ans of 10<20 :1
    iAns=20<10;
    printf("Ans of 20<10 :%d\n",iAns);        //Ans of 20<10 :0
    iAns=20>20;
    printf("Ans of 20>20 :%d\n",iAns);        //Ans of 20>20 :0
    iAns=20<=20;
    printf("Ans of 20<=20 :%d\n",iAns);       //Ans of 20<=20 :1
    iAns=20<=10;
    printf("Ans of 20<=10 :%d\n",iAns);       //Ans of 20<=10 :0
    iAns=10==20;
    printf("Ans of 10==20 :%d\n",iAns);       //Ans of 10==20 :0
    iAns=10!=20;
    printf("Ans of 10!=20 :%d\n",iAns);       //Ans of 10!=20 :1
    iAns=10!=10;
    printf("Ans of 10!=10 :%d\n",iAns);       //Ans of 10!=10 :0
    iAns=10<=20!=1;
    printf("Ans of 10<=20!=1 :%d\n",iAns);    //Ans of 10<=20!=1 :0

    

    //iAns=((10<=20)!=1)
    //   =(1!=1)
    //    =0

    return 0;
}