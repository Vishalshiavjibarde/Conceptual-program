#include<stdio.h>


int main(void)
{
    printf("First Number %d Second Number %d = %d\n",9,2,9/2);      //First Number 9 Second Number 2 = 4
    printf("First Number %d Second Number %d = %d\n",9,-2,9/-2);    //First Number 9 Second Number 2 = 4
    printf("First Number %d Second Number %d = %d\n",-9,2,-9/2);    //irst Number -9 Second Number 2 = -4
    printf("First Number %d Second Number %d = %d\n",-9,-2,-9/-2);  //First Number -9 Second Number -2 = 4
    
    return 0;
}