#include<stdio.h>

#define MAX 3

int main(void)
{

    int Arr[3];
    int icounter;

    for(icounter=0;icounter<MAX;icounter++)
    {
        printf("Enter number %d\t",icounter+1);
        scanf("%d",&Arr[icounter]);
    }

    for(icounter=0;icounter<MAX;icounter++)
        printf("Number %d is : %d\n",icounter+1,Arr[icounter]);


    return 0;
}

/*

Enter number 1  1
Enter number 2  2
Enter number 3  3
Number 1 is : 1
Number 2 is : 2
Number 3 is : 3

*/