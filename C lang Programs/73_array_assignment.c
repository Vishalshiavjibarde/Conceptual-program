#include<stdio.h>

void AssignArrays(int[],int[],int);

#define MAX  10


int main(void)
{
    int iCounter;
    int iElementCounter;
    int Arr1[MAX];
    int Arr2[MAX];

    printf("How many element you want to enter in array1 ?(<%d):\t",MAX);
    scanf("%d",&iElementCounter);


    printf("Enter Arr1 values:\n");
    for(iCounter=0;iCounter<iElementCounter;iCounter++)
    {
        printf("Enter Arr1[%d] values:\t",iCounter);
        scanf("%d",&Arr1[iCounter]);
    }


    printf("Arr1 values are :\n");
    for(iCounter=0;iCounter<iElementCounter;iCounter++)
        printf("Arr1[%d]=%d\n",iCounter,Arr1[iCounter]);

    printf("Before Assigning Arr2 values are :\n");
    for(iCounter=0;iCounter<iElementCounter;iCounter++)
        printf("Arr2[%d]=%d\n",iCounter,Arr2[iCounter]);

    AssignArrays(Arr1,Arr2,iElementCounter);
    
    printf("Arr1 values are :\n");
    for(iCounter=0;iCounter<iElementCounter;iCounter++)
        printf("Arr1[%d]=%d\n",iCounter,Arr1[iCounter]);

    printf("After Assigning Arr2 values are :\n");
    for(iCounter=0;iCounter<iElementCounter;iCounter++)
        printf("Arr2[%d]=%d\n",iCounter,Arr2[iCounter]);

    
    return 0;
}

void AssignArrays(int Arr1[],int Arr2[],int iElementCounter1)
{
    int iCounter;

    for(iCounter=0;iCounter<iElementCounter1;iCounter++)
        Arr2[iCounter]=Arr1[iCounter];

}


/*

How many element you want to enter in array1 ?(<10):    3
Enter Arr1 values:
Enter Arr1[0] values:   1
Enter Arr1[1] values:   2
Enter Arr1[2] values:   3
Arr1 values are :
Arr1[0]=1
Arr1[1]=2
Arr1[2]=3
Before Assigning Arr2 values are :
Arr2[0]=12053296
Arr2[1]=5503604
Arr2[2]=12008125
Arr1 values are :
Arr1[0]=1
Arr1[1]=2
Arr1[2]=3
After Assigning Arr2 values are :
Arr2[0]=1
Arr2[1]=2
Arr2[2]=3

*/
