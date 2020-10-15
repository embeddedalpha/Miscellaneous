#include "stdio.h"


void ConsonantorVowel(char s)
{
    if ((s == 'a') || (s == 'A') || (s == 'e') || (s == 'E') || (s == 'i') || (s == 'I') || (s == 'o') || (s == 'O') || (s == 'u') || (s == 'U')) 
    {
        printf("%c is a Vowel",s);
    }
    else
    {
        printf("%c is a Consonant",s);
    }
    
}




int main(int argc, char const *argv[])
{
char a;
printf("Enter a character:\n");
scanf("%c", &a);
ConsonantorVowel(a);
    return 0;
}
