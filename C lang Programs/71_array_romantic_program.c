#include<stdio.h>

int main(void)
{
    int arr[]={10,20,30,40,50};

    printf("value of &arr is :%d\n",&arr);                      //value of &arr is :15727860

    printf("value of arr is :%d\n",arr);                        //value of arr is :15727860

    printf("value of &arr+1 is :%d\n",&arr+1);                  //value of &arr+1 is :15727880

    printf("value of arr+1 is :%d\n",arr+1);                    //value of arr+1 is :15727864

    printf("value of arr[2] is :%d\n",arr[2]);                  //value of arr[2] is :30

    printf("value of arr[2]+1 is :%d\n",arr[2]+1);              //value of arr[2]+1 is :31

    printf("value of arr+3 is :%d\n",arr+3);                    //value of arr+3 is :15727872

  //  printf("value of ++arr is :%d",++arr);                     //Error C2105: '++' needs l-value

  //   printf("value of arr++ is :%d",arr++);                    //Error C2105: '++' needs l-value



    return 0;
}






