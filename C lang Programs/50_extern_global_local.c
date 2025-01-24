#include<stdio.h>

int g_iNo1;
int g_iNo2=10;
extern int g_iNo3;
extern int g_iNo4=20;

int main(void)
{
	int iNo1;
    int iNo2=30;
    extern int iNo3;
    //extern int iNo4=40;                                      //error C2205: 'iNo4' : cannot initialize extern variables with block scope

    printf("value of g_iNo1 :%d\n",g_iNo1);                    //value of g_iNo1 :0
    printf("value of g_iNo2 :%d\n",g_iNo2);                    //value of g_iNo2 :10
   // printf("value of extern int g_iNo3 :%d\n",g_iNo3);        //error LNK2019: unresolved external symbol _iNo3 referenced in function _main
    printf("value of extern int g_iNo4 :%d\n",g_iNo4);          //value of extern int g_iNo4 :20
    printf("value of iNo1 :%d\n",iNo1);                         //value of iNo1 :7153544
    printf("value of iNo2 :%d\n",iNo2);                         //value of iNo2 :30
  //  printf("value of extern int iNo3 :%d\n",iNo3);            error LNK2019: unresolved external symbol _g_iNo3 referenced in function _main
   // printf("value of extern int iNo4 :%d\n",iNo4);
	

	return 0;
}


