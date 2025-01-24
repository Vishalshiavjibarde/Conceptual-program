#include<stdio.h>

int CompairArray(int[],int[],int);

#define MAX        10
#define EQUAL      1
#define NOT_EQUAL  0

int main(void)
{
    int iResult;
    int iCounter;
    int iElementCounter1;
    int iElementCounter2;
    int Arr1[MAX];
    int Arr2[MAX];

    printf("How many element you want to enter in array1 ?(<%d):\t",MAX);
    scanf("%d",&iElementCounter1);

    printf("How many element you want to enter in array2 ?(<%d):\t",MAX);
    scanf("%d",&iElementCounter2);


    if(iElementCounter1!=iElementCounter2)
    {
        printf("Array values will not be equal\n");
        return 0;
    }

    printf("Enter Arr1 values:\n");
    for(iCounter=0;iCounter<iElementCounter1;iCounter++)
    {
        printf("Enter Arr1[%d] values:\t",iCounter);
        scanf("%d",&Arr1[iCounter]);
    }

    printf("Enter Arr2 values:\n");
    for(iCounter=0;iCounter<iElementCounter2;iCounter++)
    {
        printf("Enter Arr2[%d] values:\t",iCounter);
        scanf("%d",&Arr2[iCounter]);
    }

    printf("Arr1 values are :\n");
    for(iCounter=0;iCounter<iElementCounter1;iCounter++)
        printf("Arr1[%d]=%d\n",iCounter,Arr1[iCounter]);

    printf("Arr2 values are :\n");
    for(iCounter=0;iCounter<iElementCounter2;iCounter++)
        printf("Arr2[%d]=%d\n",iCounter,Arr2[iCounter]);

    iResult=CompairArray(Arr1,Arr2,iElementCounter1);
    
    if(EQUAL==iResult)
        printf("Arrays are equal");
    else
        printf("Arrays not equal");

    
    return 0;
}

int CompairArray(int Arr1[],int Arr2[],int iElementCounter1)
{
    int iCounter;

    for(iCounter=0;iCounter<iElementCounter1;iCounter++)
    {
        if(Arr1[iCounter]!=Arr2[iCounter])
            return NOT_EQUAL;
    }
    return EQUAL;
}


/*

How many element you want to enter in array1 ?(<10):    3
How many element you want to enter in array2 ?(<10):    3
Enter Arr1 values:
Enter Arr1[0] values:   1
Enter Arr1[1] values:   2
Enter Arr1[2] values:   3
Enter Arr2 values:
Enter Arr2[0] values:   1
Enter Arr2[1] values:   2
Enter Arr2[2] values:   3
Arr1 values are :
Arr1[0]=1
Arr1[1]=2
Arr1[2]=3
Arr2 values are :
Arr2[0]=1
Arr2[1]=2
Arr2[2]=3
Arrays are equal

*/
