#include<stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
	union demo Obj;
	
	printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);          //Obj.iNo1 : 3731456       Obj.iNo2 : 3731456      Obj.iNo3 :3731456

    Obj.iNo1=10;
    printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);         //Obj.iNo1 : 10    Obj.iNo2 : 10   Obj.iNo3 :10

    Obj.iNo2=20;
    printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);          //Obj.iNo1 : 20    Obj.iNo2 : 20   Obj.iNo3 :20

    Obj.iNo3=30;
    printf("Obj.iNo1 : %d\t Obj.iNo2 : %d\t Obj.iNo3 :%d\n",Obj.iNo1,Obj.iNo2,Obj.iNo3);          //Obj.iNo1 : 30    Obj.iNo2 : 30   Obj.iNo3 :30
	

	return 0;
}


