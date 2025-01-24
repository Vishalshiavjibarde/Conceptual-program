#include<stdio.h>



struct demo
{
    int iNo;
    float fNo;
};

void AssignObjects(struct demo ,struct demo*,struct demo*);



int main(void)
{
    struct demo Obj1;
    struct demo Obj2;
    struct demo Obj3;

    int icounter;

    printf("Enter obj1 values \n");
    printf("Enter integer :\t");                       //Enter integer : 10
    scanf("%d",&Obj1.iNo);
    printf("Enter float :\t");                         //Enter float :   11.11
    scanf("%f",&Obj1.fNo);

    AssignObjects(Obj1,&Obj2,&Obj3);

    printf("Obj1 Integer is :%d\n",Obj1.iNo);          //Obj1 Integer is :10
    printf("Obj1 Float is :%f\n\n",Obj1.fNo);          //Obj1 Float is :11.110000

    printf("Obj2 Integer is :%d\n",Obj2.iNo);          //Obj2 Integer is :10
    printf("Obj2 Float is :%f\n\n",Obj2.fNo);          //Obj2 Float is :11.110000

    printf("Obj3 Integer is :%d\n",Obj3.iNo);          //Obj3 Integer is :10
    printf("Obj3 Float is :%f\n",Obj3.fNo);            //Obj3 Float is :11.110000

    return 0;
}

void AssignObjects(struct demo Obj1,struct demo*pObj2,struct demo *pObj3)
{
    *pObj2=Obj1;
    pObj3->iNo=Obj1.iNo;
    pObj3->fNo=Obj1.fNo;
}

