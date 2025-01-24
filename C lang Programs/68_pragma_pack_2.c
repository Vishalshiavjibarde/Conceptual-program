#include<stdio.h>


struct demo
{
	char chChar;
	double dNo;

};

#pragma pack(1)

struct demo obj;

int main(void)
{
	
	printf("Size of Obj1 is :%d\n" , sizeof(obj));	    //Size of Obj1 is :16
	
	return 0;
}
