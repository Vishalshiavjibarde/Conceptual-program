#include<stdio.h>

int main(void)
{
    int iNo=10;
    int iAns1;
    int iAns2;


    printf("value of iNo :%d\n",iNo);         //value of iNo :10

    iAns1=++iNo;
    printf("value of iAns1 :%d\n",iAns1);     //value of iAns1 :11
    printf("value of iNo :%d\n",iNo);         //value of iNo :11

    iAns2=iNo++;
    printf("value of iAns2 :%d\n",iAns2);     //value of iAns2 :11
    printf("value of iNo :%d\n",iNo);         //value of iNo :12

    ++iNo;
    printf("Value of preincrement ++iNo : %d\n",iNo);      //Value of preincrement ++iNo : 13

    iNo++;
    printf("Value of postincrement iNo++ : %d\n",iNo++);    //Value of postincrement iNo++ : 14
    
    printf("Value of iNo++ : %d\n",iNo++);    //Value of iNo++ : 15
    printf("Value of iNo : %d\n",iNo);        //Value of iNo : 16

    printf("Value of ++iNo : %d\n",++iNo);    //Value of ++iNo : 17
    printf("Value of iNo : %d\n",iNo);        //Value of iNo : 17

    printf("Value of + +iNo : %d\n",+ +iNo);  //Value of + +iNo : 17
    printf("Value of iNo : %d\n",iNo);        //Value of iNo : 17

    //printf("Value of ++10 : %d\n",++10);      // error C2105: '++' needs l-value
    //printf("Value of 10++ : %d\n",10++);      //error C2105: '++' needs l-value

    return 0;
}