#include<stdio.h>

struct demo
{
    char chChar;
    int iNo;
    float fNo;
};

int main(void)
{
	struct demo Obj;
	
	printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);          //Obj.chChar : π   Obj.iNo : 17823652      Obj.fNo :0.000000

    Obj.chChar='A';
    printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);         //Obj.chChar : A   Obj.iNo : 17823652      Obj.fNo :0.000000

    Obj.iNo=10;
    printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);          //Obj.chChar : A   Obj.iNo : 10    Obj.fNo :0.000000

    Obj.fNo=99.99f;
    printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);          //Obj.chChar : A   Obj.iNo : 10    Obj.fNo :99.989998
	

	return 0;
}


