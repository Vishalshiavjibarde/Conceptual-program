#include<stdio.h>

int main(void)
{
    int iNo=5;
    if(iNo<10)
        printf("5<10 print One\n");              //5<10 print One
        printf("5<10 print Tw0\n\n");            //5<10 print Tw0

    iNo=15;
    if(iNo<10)
        printf("15<10 print One\n");
        printf("15<10 print Two\n\n");          //15<10 print Two

    iNo=5;
    if(iNo<10)
    {
        printf("5<10 print One\n");            //5<10 print One
        printf("5<10 print Tw0\n");            //5<10 print Tw0
    }

    iNo=15;
    if(iNo<10)                                  ////no output
    {
        printf("15<10 print One\n");           
        printf("15<10 print Tw0\n"); 
    }

    iNo=15;
    if(iNo<10);
    {
        printf("15<10; print One\n");           //15<10; print One
        printf("15<10; print Tw0\n");           //15<10; print Tw0
    }


    return 0;
}