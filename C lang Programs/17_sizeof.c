#include<stdio.h>


int main(void)
{
    int iNo=10;
    char chChar='A';
    float fNo=57.33f;
    double dNo=69.33;

    printf("sizeof(int) is :%d\n",sizeof(int));               //sizeof(int) is :4
    printf("sizeof(char) is :%d\n",sizeof(char));             //sizeof(char) is :1
    printf("sizeof(float) is :%d\n",sizeof(float));           //sizeof(float) is :4
    printf("sizeof(double) is :%d\n",sizeof(double));         //sizeof(double) is :8

    printf("sizeof(iNo) is :%d\n",sizeof(iNo));               //sizeof(iNo) is :4
    printf("sizeof(chChar) is :%d\n",sizeof(chChar));         //sizeof(chChar) is :1
    printf("sizeof(fNo) is :%d\n",sizeof(fNo));               //sizeof(fNo) is :4
    printf("sizeof(dNo) is :%d\n",sizeof(dNo));               //sizeof(dNo) is :8

    printf("sizeof(20) is :%d\n",sizeof(20));                 //sizeof(20) is :4
    printf("sizeof('z') is :%d\n",sizeof('z'));               //sizeof('z') is :4
    printf("sizeof(99.99) is :%d\n",sizeof(99.99));           //sizeof(99.99) is :8
    printf("sizeof(99.99f) is :%d\n",sizeof(99.99f));         //sizeof(99.99f) is :4

    printf("sizeof 20 is :%d\n",sizeof 20);                   //sizeof 20 is :4
    printf("sizeof iNO is :%d\n",sizeof iNo);                 //sizeof iNO is :4
    //printf("sizeof int is :%d\n",sizeof int);                 //error C2059: syntax error : 'type'

    printf("value of iNO is :%d\n",iNo);                     //value of iNO is :10
    printf("sizeof(++iNo) is :%d\n",sizeof(++iNo));          //sizeof(++iNo) is :4
    printf("value of iNO is :%d\n",iNo);                     //value of iNO is :10

    printf("sizeof(void) is :%d\n",sizeof(void));           //sizeof(void) is :0


    return 0;
}