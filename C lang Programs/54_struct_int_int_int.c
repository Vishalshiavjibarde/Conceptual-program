#include<stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
	struct demo Obj;
	
	printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);          //Obj.iNo1 : 9112960       Obj.iNo2 : 0    Obj.iNo3 :3698688

    Obj.iNo1=10;
    printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);         //Obj.iNo1 : 10    Obj.iNo2 : 0    Obj.iNo3 :3698688

    Obj.iNo2=20;
    printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);          //Obj.iNo1 : 10    Obj.iNo2 : 20   Obj.iNo3 :3698688

    Obj.iNo3=30;
    printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);          //Obj.iNo1 : 10    Obj.iNo2 : 20   Obj.iNo3 :30
	

	return 0;
}


