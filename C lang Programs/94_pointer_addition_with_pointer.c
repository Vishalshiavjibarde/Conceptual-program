#include<stdio.h>

int main(void)
{
    int Arr[]={10,20,30,40,50};
    int *pPtr1=Arr;
    int *pPtr2=&Arr[4];                             

    printf("pPtr1 :%d\n",pPtr1);     //pPtr1 :15727224  
    printf("pPtr2 :%d\n",pPtr2);     //pPtr2 :15727240 

   // printf("pPtr1+pPtr2 =%d",pPtr1+pPtr2);    //error C2110: '+' : cannot add two pointers
    return 0;
}