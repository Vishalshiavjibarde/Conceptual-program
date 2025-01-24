#include<stdio.h>

int main(void)
{
    double Arr[]={10.11,20.22,30.33,40.44,50.55};
    double *pPtr=Arr;                                 

    printf("pPtr :%d\n",pPtr);                    //pPtr :17824144
    printf("*pPtr :%lf\n",*pPtr);                 //*pPtr :10.110000

    printf("pPtr+3 :%d\n",pPtr+3);                 //pPtr+3 :17824168
    printf("*(pPtr+3) :%lf\n",*(pPtr+3));          //*(pPtr+3) :40.440000

    printf("3+pPtr :%d\n",3+pPtr);                 //3+pPtr :17824168
    printf("*(3+pPtr) :%lf\n",*(3+pPtr));         //*(3+pPtr) :40.440000

    printf("pPtr :%d\n",pPtr);                   //pPtr :17824144
    printf("*pPtr :%lf\n",*pPtr);                //*pPtr :10.110000

    return 0;
}