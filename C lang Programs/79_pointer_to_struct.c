#include<stdio.h>


struct demo
{
    int iNo;
    float fNo;
};

void Print(struct demo);
void Scan(struct demo*);


int main(void)
{
    struct demo Obj;
    Scan(&Obj);
    Print(Obj);

    return 0;
}

void Scan(struct demo *pPtr)
{
    printf("Enter Integer :\t");
    Scanf("%d",&pPtr->iNo);
    printf("Enter Float :\t");
    scanf("%f",&pPtr->fNo);
}

void Print(struct demo Obj)
{
    printf("Integer is :%d\n",Obj.iNo);
    printf("Float is :%f\n",Obj.fNo);
}