#include "stdio.h"

void PositiveOrNegative(int i)
{
    if (i > 0)
    {
        printf("%d is a positive number",i);
    }
    else
    {
        printf("%d is a negative number",i);
    }
    
    
}


int main(int argc, char const *argv[])
{
    int i;
    printf("Enter a number:\n");
    scanf("%d",&i);
    PositiveOrNegative(i);
    
    return 0;
}
