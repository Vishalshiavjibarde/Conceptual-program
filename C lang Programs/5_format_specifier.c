#include<stdio.h>


int main(void)
{

    printf("print 65 using %%c = %c\n",65);            //print 65 using %c =A
    printf("print 65 using %%d = %d\n",65);            //print 65 using %d = 65
    printf("print 65 using %%i = %i\n",65);             //print 65 using %i = 65
    printf("print 65 using %%u = %u\n",65);             //print 65 using %u = 65
    printf("print -65 using %%d = %d\n",-65);           //print -65 using %d = -65
    printf("print -65 using %%u = %u\n",-65);           //print -65 using %u = 4294967231
    printf("print 65 using %%o = %o\n",65);            //print 65 using %o = 101
    printf("print 101 using %%d = %d\n",101);           //print 101 using %d = 101
    printf("print 0101 using %%d = %d\n",0101);         //print 0101 using %d = 65
    printf("print 65 using %%x = %x\n",65);             //print 65 using %x = 41
    printf("print 177 using %%x = %x\n",177);           //print 177 using %x = b1
    printf("print 177 using %%X = %X\n",177);           //print 177 using %X = B1
    printf("print 0x41 using %%d = %d\n",0x41);         //print 0x41 using %d = 65
    printf("print -40 using %%ld = %ld\n",-40);         //print -40 using %ld = -40
    printf("print -40 using %%hd = %hd\n",-40);         //print -40 using %hd = -40
    printf("print 40 using %%lu = %lu\n",40);           //print 40 using %lu = 40
    printf("print 40 using %%hu = %hu\n",40);           //print 40 using %hu = 40
    printf("print 40.22 using %%f = %f\n",40.22);       //print 40.22 using %f = 40.220000
    printf("print 40 using %%e = %e\n",40);             //print 40 using %e = 2.276698e-305
    printf("print 40 using %%E = %E\n",40);             //print 40 using %E = 2.276698E-305
    printf("print 40 using %%g = %g\n",40);             //print 40 using %g = 2.2767e-305
    printf("print 40 using %%G = %G\n",40);             //print 40 using %G = 2.2767E-305
    printf("print 40 using %%lf = %lf\n",40.22);        //print 40 using %lf = 40.220000
    printf("print vishal using %%s = %s\n","vishal");   //print vishal using %s = vishal
    printf("print 40 using %%p = %p\n",40);             //print 40 using %p = 00000028

    return 0;
}