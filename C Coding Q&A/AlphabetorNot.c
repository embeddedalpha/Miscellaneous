#include "stdio.h"


void AlphabetorNot(int ch)
{
    if ( ((ch >= 65) && (ch <=95)) || ( (ch >= 97) && (ch <= 122)))
    {
        printf("Character you entered is an alphabet\n");
    }
    else
    {
        printf("Character you entered is not an alphabet\n");
    }

}


int main(int argc, char const *argv[])
{
    char s;
    printf("Enter something\n");
    scanf("%c",&s);
    AlphabetorNot(s);

    return 0;
}
