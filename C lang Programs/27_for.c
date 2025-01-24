#include<stdio.h>



int main(void)
{
    int iCounter;
    int iCounter2;


    //version:1
    for(iCounter=0;iCounter<3;iCounter++)
        printf("version:1 --> %d\n",iCounter);
        

    //version:2
    iCounter=0;
    for(;iCounter<3;iCounter++)
        printf("version:2 --> %d\n",iCounter);

    //version:3
    for(iCounter=0;;iCounter++)
    {
        if(iCounter==3)
            break;
        printf("version:3 --> %d\n",iCounter);
    }

    //version:4
    for(iCounter=0;iCounter<3;)
    {
        printf("version:4 -->%d\n",iCounter);
        iCounter++;
    }

    //version:5
    iCounter=0;
    for(;;)
    {
        if(iCounter==3)
            break;
        printf("version:5 -->%d\n",iCounter);
        iCounter++;
    }
        
    //version:6
    iCounter=0;
    for(;iCounter<3;)
    {
        printf("version:6 -->%d\n",iCounter);
        iCounter++;
    }

    //version:7
    for(iCounter=0,iCounter2=3;iCounter<3,iCounter2>0;iCounter++,iCounter2--)
        printf("Version:7 -->%d\t%d\n",iCounter,iCounter2);

    //version:8
    for(iCounter=3;iCounter<3;iCounter++)
        printf("Version:8 -->%d\n",iCounter);

    return 0;
}

/*
version:1 --> 0
version:1 --> 1
version:1 --> 2

version:2 --> 0
version:2 --> 1
version:2 --> 2

version:3 --> 0
version:3 --> 1
version:3 --> 2

version:4 -->0
version:4 -->1
version:4 -->2

version:5 -->0
version:5 -->1
version:5 -->2

version:6 -->0
version:6 -->1
version:6 -->2

Version:7 -->0  3
Version:7 -->1  2
Version:7 -->2  1
*/