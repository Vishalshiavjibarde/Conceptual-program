#include<stdio.h>

union demo
{
    char chChar;
    int iNo;
    float fNo;
};

int main(void)
{
	union demo Obj;
	
	printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);          //Obj.chChar :     Obj.iNo : 1     Obj.fNo :0.000000

    Obj.chChar='A';
    printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);         //Obj.chChar : A   Obj.iNo : 65    Obj.fNo :0.000000

    Obj.iNo=10;
    printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);          //Obj.chChar :
                                                                                                                //Obj.iNo : 10    Obj.fNo :0.000000

    Obj.fNo=99.99f;
    printf("Obj.chChar : %c\t Obj.iNo : %d\t Obj.fNo :%f\n",Obj.chChar,Obj.iNo,Obj.fNo);          //Obj.chChar : ß   Obj.iNo : 1120402145    Obj.fNo :99.989998
	
	return 0;
}

/*

Obj.chChar :     Obj.iNo : 1     Obj.fNo :0.000000
Obj.chChar : A   Obj.iNo : 65    Obj.fNo :0.000000
Obj.chChar :
         Obj.iNo : 10    Obj.fNo :0.000000
Obj.chChar : ß   Obj.iNo : 1120402145    Obj.fNo :99.989998


*/

