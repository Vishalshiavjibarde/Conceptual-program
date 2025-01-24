#include<stdio.h>


int main(void)
{
    switch (2)
    {
    case 1:
        printf("in case One\n");
    case 2:
        printf("in case Two\n");                  //in case Two
    case 3:
        printf("in case Three\n");                //in case Three

    }


    switch (3)
    {
    case 1:
        printf("in case One\n");
    case 2:
        printf("in case Two\n");
    case 3:
        printf("in case Three\n");               //in case Three
    }

    switch (5)
    {
    case 1:
        printf("in case One\n");
    case 2:
        printf("in case Two\n");
    case 3:
        printf("in case Three\n");
    default:
        printf("in default\n");                  //in default
    }


    switch (5)
    {
    case 1:
        printf("in case One\n");
    default:
        printf("in default\n");                //in default
    case 2:
        printf("in case Two\n");               //in case Two
    case 3:
        printf("in case Three\n");             //in case Three
    }



    switch (5)                                //no output
    {
    case 1:
        printf("in case One\n");
    case 2:
        printf("in case Two\n");
    case 3:
        printf("in case Three\n");
    }

    return 0;
}