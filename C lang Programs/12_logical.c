#include<stdio.h>

int main(void)
{

    printf("output of 1&&0 : %d\n",1&&0);               //output of 1&&0 : 0
    printf("output of 0&&0 : %d\n",0&&0);               //output of 0&&0 : 0
    printf("output of 1&&1 : %d\n",1&&1);               //output of 1&&1 : 1
    printf("output of 1||1 : %d\n",1||1);               //output of 1||1 : 1
    printf("output of 1||0 : %d\n",1||0);               //output of 1||0 : 1
    printf("output of 0||0 : %d\n",0&&0);               //output of 0||0 : 0
    printf("output of !1 : %d\n",!1);                   //output of !1 : 0
    
    printf("output of 10||20 : %d\n",10||20);           //output of 10||20 : 1
    printf("output of 10||-20 : %d\n",10||-20);         //output of 10||-20 : 1
    printf("output of 10&&-20 : %d\n",10&&-20);         //output of 10&&-20 : 1
    printf("output of !10 : %d\n",!10);                 //output of !10 : 0
    printf("output of !-10 : %d\n",!-10);               //output of !-10 : 0

    return 0;
}