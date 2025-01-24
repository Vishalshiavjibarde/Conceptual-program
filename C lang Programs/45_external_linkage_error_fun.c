#include<stdio.h>

int g_iNo = 10;

void Fun(void)
{

    printf("in fun : %d\n",g_iNo); 
}


////45_external_linkage_error_fun.obj : error LNK2005: _g_iNo already defined in 45_external_linkage_error_main.obj