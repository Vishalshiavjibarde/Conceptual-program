#include<stdio.h>


int main(void)
{   
    printf("Output of Bitwise_AND 28&14 : %d\n",28&14);       //Output of Bitwise_AND 28&14 : 12
    printf("Output of Bitwise_OR 28|14 : %d\n",28|14);        //Output of Bitwise_OR 28|14 : 30
    printf("Output of X-OR 28^14 : %d\n",28^14);              //Output of X-OR 28^14 : 18
    printf("Output of Bitwise Not ~28 : %d\n",~28);           //Output of Bitwise Not ~28 : -29

    printf("Output of Left Shift 8<<1 : %d\n",8<<1);          //Output of Left Shift 8<<1 : 16
    printf("Output of Right Shift 8>>1 : %d\n",8>>1);         //Output of Right Shift 8>>1 : 4
    printf("Output of Left Shift 20<<2 : %d\n",20<<2);        //Output of Left Shift 20<<2 : 80
    printf("Output of Right Shift 20>>2 : %d\n",20>>2);       //Output of Right Shift 20>>2 : 5


    return 0;
}