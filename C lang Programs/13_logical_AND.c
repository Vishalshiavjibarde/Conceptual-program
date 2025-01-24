#include<stdio.h>

int main(void)
{

    int iNo1=0;
    int iNo2=1;
    int iNo3=2;
    int iAns;


    iAns=iNo1&&++iNo2&&iNo3++;
    printf(" value of iNo1 :%d\n value of iNo2 : %d\n value of iNo3 : %d\n value of iAns : %d",iNo1,iNo2,iNo3,iAns);

    // value of iNo1 :0
    //value of iNo2 : 1
    //value of iNo3 : 2
    //value of iAns : 0


  //---------------------------------
    //iAns=(iNo1&&(++iNo2))&&(iNo3++);
    //    =0&&iNo3++;
    //    =0; 
    
    return 0;
}