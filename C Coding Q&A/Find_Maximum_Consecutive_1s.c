//Find the maximum number of consecutive ones in an array


#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i,j,q=0;
    for(i = 0; i<numsSize;i++)
    {
        if(nums[i] == 1 && nums[i + 1]==1)
        {
            q++;
            j = q;
        }
        else
        {
            q = 0;
        }
    }
    return (j + 1);
}

int main()
{
   int a[] = {1,1,0,1,1,0,1,1,1};
   int length = sizeof(a)/sizeof(int);
   
   int ans = findMaxConsecutiveOnes(a,length);
   
   printf("%d",ans);
   
    return 0;
}
