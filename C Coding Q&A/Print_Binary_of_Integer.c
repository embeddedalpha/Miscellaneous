
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

void bitset_print(int x)
{
    int byte_len = 0;
    printf("number = %d\n",x);
    if((x >= 0 ) && ( x <= 255))
    {
        byte_len = 7;
        printf("byte 1\n");
    }
    else if((x >= 256 ) && ( x <= 65535))
    {
        byte_len = 15;
        printf("byte 2\n");
    }
    else if((x >= 65536 ) && ( x <= 16777215))
    {
        byte_len = 23;
        printf("byte 3\n");
    }
    else if((x >= 16777216 ) && ( x <= 2147483647))
    {
        byte_len = 31;
        printf("byte 4\n");
    }
    
    
    for(int i = byte_len; i >= 0; i--)
    {
        if(x & (1 << i)) printf("1");
        else printf("0");
    }
}



int main() {

int x = 5;

print_binary(x);
bitset_print(x);



    return 0;
}
