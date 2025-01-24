#include<stdio.h>



int main(void)
{
    float Arr[]={10.11f,20.11f,30.11f,40.11f,50.11f};

    float *pPtr=&Arr[4];

    printf("pPtr :%d\n",pPtr);                 //pPtr :7600708
    printf("*pPtr :%f\n",*pPtr);               //*pPtr :50.110001

    printf("pPtr-3 :%d\n",pPtr-3);             //pPtr-3 :7600696
    printf("*(pPtr-3) :%f\n",*(pPtr-3));       //*(pPtr-3) :20.110001

    //printf("3-pPtr :%d\n",3-pPtr);           //error C2113: '-' : pointer can only be subtracted from another pointer
    //printf("*(3-pPtr) :%f\n",*(3-pPtr));    //error C2113: '-' : pointer can only be subtracted from another pointer

    printf("pPtr :%d\n",pPtr);                //pPtr :7600708
    printf("*pPtr :%f\n",*pPtr);              //*pPtr :50.110001

    return 0;
}