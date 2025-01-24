#include<stdio.h>


int main(void)
{

    char ch1 = 'A';
    char ch2 = 66;
    int No1=67;
    int No2='D';
    char ans;

    printf("Ch1 in charater Format= %c\n",ch1);            //Ch1 in charater Format= A
    printf("Ch1 in decimal Format= %d\n",ch1);            //Ch1 in decimal Format= 65


    printf("ch2 in char format= %c\n",ch2);                 //ch2 in char format= B
    printf("ch2 in decimal format= %d\n",ch2);             //ch2 in decimal format= 66

    printf("No1 in char format= %c\n",No1);                  //No1 in char format= C
    printf("No1 in decimal format= %d\n",No1);             //No1 in decimal format= 67

    printf("No2 in char format= %c\n",No2);                //No2 in char format= D
    printf("No2 in decimal format= %d\n",No2);             //No2 in decimal format= 68

    printf("33 in char format= %c\n",33);                //33 in char format= !
    printf("36 in char format= %c\n",36);                 //36 in char format= $

    ans=33+36;

    printf("33+36 = %d(decimal format)\n",ans);          //33+36 = 69(decimal format)
    printf("33+36 = %c(char format)\n",ans);               //33+36 = E(char format)


    return 0;
}