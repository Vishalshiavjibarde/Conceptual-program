#include<stdio.h>


int main(void)
{
    int iNo1=0;
    int iNo2=1;
    int iNo3=2;
    int iAns;

    iAns=++iNo1||++iNo2&&++iNo3;

    printf("value of iNo1 :%d\nvalue of iNo2 :%d\nvalue of iNo3 :%d\nvalue of iAns :%d",iNo1,iNo2,iNo3);

    /*
    value of iNo1 :1
    value of iNo2 :1
    value of iNo3 :2
    value of iAns :1*/

 // iAns=(++iNO1)||((++iNo2)&&(++iNo3))
 //       = 1

    return 0;
}