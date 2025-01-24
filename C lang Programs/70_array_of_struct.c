#include<stdio.h>

#define MAX 3

struct demo 
{
    int iNo;
    float fNo;
};

int main(void)
{
    struct demo arr[MAX]={0};
    int icounter;
    for(icounter=0;icounter<MAX;icounter++)
    {
        printf("Enter obj %d values \n",icounter+1);
        printf("Enter integer :\t");
        scanf("%d",&arr[icounter].iNo);
        printf("Enter float :\t");
        scanf("%f",&arr[icounter].fNo);
    }

    for(icounter=0;icounter<MAX;icounter++)
    {
        printf("obj %d values are \n",icounter+1);
        printf("integer is :%d \n",arr[icounter].iNo);
        printf("float is :%f \n",arr[icounter].fNo);
    }
    return 0;
}

/*
Enter obj 1 values
Enter integer : 10
Enter float :   10.1
Enter obj 2 values
Enter integer : 20
Enter float :   20.1
Enter obj 3 values
Enter integer : 30
Enter float :   30.1
obj 1 values are
integer is :10
float is :10.100000
obj 2 values are
integer is :20
float is :20.100000
obj 3 values are
integer is :30
float is :30.100000


*/