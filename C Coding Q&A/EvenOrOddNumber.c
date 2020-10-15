#include "stdio.h"

void EvenOrOdd(int x)
{
    int i = x & 1;
    if(i == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    
}


int main(int argc, char const *argv[])
{
int x;
printf("Enter a number: \n");
scanf("%x",&x);
EvenOrOdd(x);
    
    return 0;
}
