#include <stdio.h>
#include "stdbool.h"

void swap_two_integers(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {

int x = 155;
int y = 98;
printf(" before swapping: x = %d, y = %d \n",x,y);

swap_two_integers(&x,&y);
printf(" after swapping: x = %d, y = %d \n",x,y);



    return 0;
}
