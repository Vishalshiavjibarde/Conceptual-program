#include<stdio.h>
#include"Calculation.h"


int main(void)
{

    int iNo1,iNo2,iNo3;
    int iAns=0;


    printf("Enter two numbers :");
    scanf("%d%d",&iNo1,&iNo2);                     //Enter two numbers :20 10

    iAns=addition(iNo1,iNo2);
    printf("addition is :%d\n",iAns);              //addition is :30

    subtraction(iNo1,iNo2);                        //substration is : 10

    iAns=multiplication(iNo1,iNo2);
    printf("multiplication is :%d\n",iAns);        //multiplication is :200

    iAns=division();
    printf("Quotient is :%d\n",iAns);              //Quotient is :3

    modulus();                                     //riminder is : 0
    return 0;
}

void modulus(void)
{
    int numerator;
    int denuminator;

    printf("Enter numerator:");
    scanf("%d",&numerator);                      // Enter numerator:9


    printf("Enter denominator:");
    scanf("%d",&denuminator);                    //Enter denominator:3

   printf("riminder is : %d \n",numerator%denuminator);
}


int multiplication(int ino,int ino2)
{
    return ino*ino2;
}

int division(void)
{
    int numerator;
    int denuminator;
   printf("Enter numerator and denominator :");
   scanf("%d%d",&numerator,&denuminator);               //Enter numerator and denominator :9 3
   return numerator/denuminator; 
}
int addition(int no,int no2)
{
    int ans=0;
    ans=no+no2;
    return ans;

}

void subtraction(int ino1,int ino2)
{
    int ans=0;
    ans=ino1-ino2;
    printf("substration is : %d\n",ans);
}