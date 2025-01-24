#include<stdio.h>


int main(void)
{
    printf("Sizeof(int)=%d\n",sizeof(int));                                 //4
    printf("Sizeof(short int)=%d\n",sizeof(short int));                     //2
    printf("Sizeof(long int)=%d\n",sizeof(long int));                       //4
    printf("Sizeof(long long int)=%d\n",sizeof(long long int));             //8
    
    printf("Sizeof(char)=%d\n",sizeof(char));                               //1
    //printf("Sizeof(short char)=%d\n",sizeof(short char));                 //error C2632: 'short' followed by 'char' is illegal
    //printf("Sizeof(long char)=%d\n",sizeof(long char));                  // error C2632: 'long' followed by 'char' is illegal
    //printf("Sizeof(long long char)=%d\n",sizeof(long long char));        // error C2632: '__int64' followed by 'char' is illegal

    printf("Sizeof(float)=%d\n",sizeof(float));                             //4
    //printf("Sizeof(short float)=%d\n",sizeof(short float));             //'short' followed by 'float' is illegal
    //printf("Sizeof(long float)=%d\n",sizeof(long float));               // warning C4215: nonstandard extension used : long float
    //printf("Sizeof(long long float)=%d\n",sizeof(long long float));     //error C2632: '__int64' followed by 'float' is illegal

    printf("Sizeof(double)=%d\n",sizeof(double));                         //8
    //printf("Sizeof(short double)=%d\n",sizeof(short double));           //error C2632: 'short' followed by 'double' is illegal
    printf("Sizeof(long double)=%d\n",sizeof(long double));               //8
  //  printf("Sizeof(long long double)=%d\n",sizeof(long long double));   //error C2632: '__int64' followed by 'double' is illegal

    return 0;
}