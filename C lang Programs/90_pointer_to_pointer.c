#include<stdio.h>


int main(void)
{
    int iNo=10;

    int *p=&iNo;

    int **q=&p;

    int ***r=&q;

    int ****s=&r;
    
    int *****x=&s;

    int ******y=&x;

    int *******z=&y;


    printf("P : %d\n",p);                                           //P : 20184804
    printf("*p : %d\n",*p);                                         //*p : 10
    printf("q : %d\n",q);                                           //q : 20184816
    printf("**q : %d\n",**q);                                       //**q : 10
    printf("****z : %d\n",****z);                                   //****z : 20184796
   // printf("****r : %d\n",****r);                                  //error C2100: illegal indirection
    printf("*******z : %d\n",*******z);                             //*******z : 10
    printf("&(***y) : %d\n",&(***y));                               //&(***y) : 20184788
    printf("&(*****x) : %d\n",&(*****x));                           //&(*****x) : 20184804
    printf("*(&(***s)) : %d\n",*(&(***s)));                         //*(&(***s)) : 20184804
    printf("&(*p) : %d\n",&(*p));                                   //&(*p) : 20184804
    printf("*(&(*p)) : %d\n",*(&(*p)));                             //*(&(*p)) : 10
    printf("iNo : %d\n",iNo);                                       //iNo : 10
    printf("&iNo : %d\n",&iNo);                                     //&iNo : 20184804
    printf("*(&iNO) : %d\n",*(&iNo));                               //*(&iNO) : 10

    return 0;
}

