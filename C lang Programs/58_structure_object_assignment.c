#include<stdio.h>


struct demo
{
    int iNo;
    float fNo;

};
int main()
{
    struct demo Obj1;
    struct demo Obj2;
    struct demo Obj3;

    printf("Enter Obj1 values : \n");
    printf("Enter integer :\t");
    scanf("%d",&Obj1.iNo);

    Obj2=Obj1;

    Obj3.iNo=Obj1.iNo;
    Obj3.fNo=Obj1.fNo;
    
    printf("Obj1 values are :\n");
    printf("integer is : %d\n",Obj1.iNo);
    printf("Float is : %f\n",Obj1.fNo);

    printf("Obj2 values are :\n");
    printf("integer is : %d\n",Obj2.iNo);
    printf("Float is : %f\n",Obj2.fNo);

    printf("Obj3 values are :\n");
    printf("integer is : %d\n",Obj3.iNo);
    printf("Float is : %f\n",Obj3.fNo);

    return 0;
}


/*
Enter Obj1 values :
Enter integer : 10
Obj1 values are :
integer is : 10
Float is : 0.000000
Obj2 values are :
integer is : 10
Float is : 0.000000
Obj3 values are :
integer is : 10
Float is : 0.000000

*/