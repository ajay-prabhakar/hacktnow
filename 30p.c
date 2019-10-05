#include <stdio.h>
int main()
{
  int a, x[6], sum = 0;
  printf("Enter 6 numbers: ");
  for(a = 0; a < 6; ++a)
  {
      scanf("%d", x+a);
      sum += *(x+a);
  }
  printf("Sum = %d", sum);
  return 0;
}
