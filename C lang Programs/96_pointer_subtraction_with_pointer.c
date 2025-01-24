#include<stdio.h>

int main(void)
{
    int Arr[]={10,20,30,40,50};

    int *pPtr1=Arr;
    int *pPtr2 = &Arr[4];

    printf("pPtr1 :%d\n",pPtr1);                 //pPtr1 :7337828
    printf("pPtr2 :%d\n",pPtr2);                 //pPtr2 :7337844

    printf("pPtr1-pPtr2 :%d\n",pPtr1-pPtr2);    //pPtr1-pPtr2 :-4
    printf("pPtr2-pPtr1 :%d\n",pPtr2-pPtr1);    //pPtr2-pPtr1 :4

    return 0;
}



