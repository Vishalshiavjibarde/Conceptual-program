#include<stdio.h>

#define EQUAL    1
#define NOTEQUAL 0

struct demo
{
    int iNo;
    float fNo;

};

int CompairObjects(struct demo ,struct demo);


int main()
{
    int iret;

    struct demo Obj1;
    struct demo Obj2;

    printf("Enter Obj1 values : \n");
    printf("Enter integer :\t\n");
    scanf("%d\n",&Obj1.iNo);
    printf("Enter float :\t\n");
    scanf("%f\n",&Obj1.fNo);

    printf("Enter Obj2 values : \n");
    printf("Enter integer :\t\n");
    scanf("%d\n",&Obj2.iNo);
    printf("Enter float :\t\n");
    scanf("%f\n",&Obj2.fNo);

    printf("Obj1 values are :\n");
    printf("integer is : %d\n",Obj1.iNo);
    printf("Float is : %f\n",Obj1.fNo);

    printf("Obj2 values are :\n");
    printf("integer is : %d\n",Obj2.iNo);
    printf("Float is : %f\n",Obj2.fNo);

    iret=CompairObjects(Obj1,Obj2);
    if(EQUAL==iret)
        printf("Objects are equal");
    else
        printf("Not equal");


    return 0;
}


int CompairObjects(struct demo  Obj1,struct demo Obj2)
{
    if(Obj1.iNo==Obj2.iNo&&Obj1.fNo==Obj2.fNo)
        return EQUAL;
    return NOTEQUAL;
}


/*




*/