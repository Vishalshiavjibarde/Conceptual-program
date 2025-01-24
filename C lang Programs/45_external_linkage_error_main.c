#include<stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("in main : %d\n",g_iNo);

    Fun();
    return 0;
}

    int g_iNo=20;

    ////45_external_linkage_error_main.exe : fatal error LNK1169: one or more multiply defined symbols found