
#include <stdio.h>
#include "stdbool.h"


int print_binary(int x)
{
    for(int i = 31; i >= 0; i--)
    {
        if(x & (1 << i))printf("1");
        else printf("0");
    }
}


int main() {

int x = 5;

print_binary( x);




    return 0;
}
