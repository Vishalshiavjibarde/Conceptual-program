#include<stdio.h>


int main(void)
{
    char chChar;
    
    printf("Enter Character :\n");
    scanf("%c",&chChar);

    switch (chChar)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("it is small letter vowel\n");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("it is capital letter vowel\n");
        break;
    default:
        printf("it is not vowel");
    }
    return 0;
}


/*
Enter Character :
a
it is small letter vowel
-----------------
Enter Character :
E
it is capital letter vowel
-------------------

Enter Character :
B
it is not vowel

*/