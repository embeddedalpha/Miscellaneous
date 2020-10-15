#include "stdio.h"


void identify_case(int c)
{
    if ( (c >= 65 && c <= 90)  || (c >= 97 && c <= 122) )
    {
        if (c >= 65 && c <= 90)
        {
            printf("%c is an upper case character",c);
        }
        else
        {
            printf("%c is a lower case character",c);
        }
          
    }
    else
    {
        printf("%c is a special character",c);
    }
       
}

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    identify_case(ch);
    return 0;
}
