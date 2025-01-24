#include<stdio.h>

int Addition(int ,int );
int Subtraction(int ,int );
int Multiplication(int ,int );
int Division(int ,int );
int Modulus(int ,int );

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;

    while (1)
    {    

        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit\n");

        printf("Enter your choice :\t");
        scanf("%d",&iChoice);

        if(iChoice<=0||iChoice>=7)
        {
            printf("wrong choice \n");
            continue;
        }
        else if(iChoice==6)
            break;
        

        printf("Enter two number :\t");
        scanf("%d%d",&iNo1,&iNo2);


        switch (iChoice)
        {
        case 1:
            iAns=Addition(iNo1,iNo2);
            break;
        case 2:
            iAns=Subtraction(iNo1,iNo2);
            break;
        case 3:
            iAns=Multiplication(iNo1,iNo2);
            break;
        case 4:
            iAns=Division(iNo1,iNo2);
            break;
        case 5:
            iAns=Modulus(iNo1,iNo2);
        }
        printf("Answer is %d\n",iAns);
        return 0;
    }

}

int Addition(int iNo1,int iNo2)
{
    return iNo1+iNo2;
}

int Subtraction(int iNo1,int iNo2)
{
    return iNo1-iNo2;
}

int Multiplication(int iNo1,int iNo2)
{
    return iNo1*iNo2;
}

int Division(int iNo1,int iNo2)
{
    return iNo1/iNo2;
}

int Modulus(int iNo1,int iNo2)
{
    return iNo1%iNo2;
}



/*
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :     1
Enter two number :      10 20
Answer is 30


1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :     2
Enter two number :      50 2
Answer is 48


1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :     3
Enter two number :      5 3
Answer is 15


1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :     4
Enter two number :      100 2
Answer is 50


1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :     5
Enter two number :      10 3
Answer is 1

1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :     6



*/