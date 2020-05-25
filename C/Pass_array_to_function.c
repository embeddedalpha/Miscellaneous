#include <stdio.h>
#include <math.h>




void Generate_Numbers(int* array_1, int length_1, int* array_2, int length_2)
{
  for(int i = 0; i < length_1; i++)
  {
  *array_1 = i*2;
  array_1++;
  }
  for(int i = 0; i < length_2; i++)
  {
  *array_2 = i*2;
  array_2++;
  }

}


int main(void)
{
int a1[], a2[];
int length_1 = length_2 = 100;
Generate_Numbers(&a1, length_1, &a2, length_2);

for(int i = 0 ; i<length_1; i++)
{
printf("%d \t %d \n", a1[i], a2[i]);
}

return 0;
}
