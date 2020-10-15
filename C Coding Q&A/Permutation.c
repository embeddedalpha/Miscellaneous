#include "stdio.h"


long int factorial(long int x)
{
    long int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * (long int)i;
    }
    return f;
}


long int Permutation(long int n, long int r)
{
    long int x = (float)(factorial(n) / factorial(n-r));
    return x;


}

int main(int argc, char const *argv[])
{
    long int x,n,r;
    printf("Enter the N: ");
    scanf("%d",&n);
    printf("Enter the P: ");
    scanf("%d",&r);
    x  = Permutation(n,r);
    printf("Solution : %li",x);

    return 0;
}
