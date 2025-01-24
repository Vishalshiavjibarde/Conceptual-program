#include<stdio.h>

void Fun();

int main(void)
{
	
	extern int g_iNo;
	
	printf("in main %d\n",g_iNo);
	
	Fun();
	
	return 0;
	
}
static int g_iNo=20; 



//47_internal_linkage_error_main.obj : error LNK2019: unresolved external symbol _g_iNo referenced in function _main
//47_internal_linkage_error_fun.exe : fatal error LNK1120: 1 unresolved externals