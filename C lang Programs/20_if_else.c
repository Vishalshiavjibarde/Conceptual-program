#include<stdio.h>

int main(void)
{
    int iNo=5;
    if(iNo<10)
        printf("5<10 print One\n");              //5<10 print One
    else
        printf("5<10 print Two\n\n");


    iNo=15;
    if(iNo<10)
        printf("15<10 print One\n");
    else
        printf("15<10 print Two\n\n");          //15<10 print Two

/*
    iNo=5;
    if(iNo<10)
        printf("5<10 print One\n");
        printf("5<10 print Tw0\n");
    else                                        // error C2181: illegal else without matching if
        printf("5<10 print Three\n\n");
*/

    iNo=15;
    if(iNo<10)                                  
    {
        printf("15<10 print One\n");           
        printf("15<10 print Tw0\n"); 
    }
    else
        printf("15<10 print Three\n\n");        //15<10 print Three


/*
    iNo=15;
    if(iNo<10);
    {
        printf("15<10; print One\n");
        printf("15<10; print Tw0\n");
    }
    else                                            //error C2181: illegal else without matching if
        printf("15<10 print Three\n\n");
*/

    return 0;
}