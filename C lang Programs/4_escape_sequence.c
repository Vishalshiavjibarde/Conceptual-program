#include<stdio.h>


int main(void)
{
    printf("Hello\n");                 //Hello
    //printf(""Hello\n"");              // error C2146: syntax error : missing ')' before identifier 'Hello'
    printf("\"Hello\"\n");             //"Hello"
    printf("'Hello'\n");               //'Hello'
    printf("\'Hello\'\n");              //'Hello'
    printf("How are you?\n");          //How are you?
    printf("How are you\?\n");         //How are you?

    printf("\temp\bin\new\n");
     //     emin
     //ew
    printf("\\temp\\bin\\new\n");       //\temp\bin\new


   printf("Hello what is your Name \a\n");   //Hello what is your Name
   printf("Hello what is your \bName \n");   //Hello what is yourName
   printf("Hello what is your Name \f\n");   //Hello what is your Name
   
   printf("Hello what is your Name \n\n");   //Hello what is your Name

   printf("Hello what \ris your Name \n");   //is your Name
   printf("Hello what \tis your Name \n");   //Hello what   is your Name
   printf("Hello what is \vyour Name \n");
   //Hello what is
   //your Name
   printf("Hello \0what is your Name \n");      //Hello
    
    return 0;
}