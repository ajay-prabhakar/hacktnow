#include <stdio.h>
#define fo(x,n) for(int x = 0; x < n; ++x)

int main()
{
  int a, x[6], sum = 0;
  printf("Enter 6 numbers: ");
  fo(a,6)
  {
      scanf("%d", x+a);

      sum += *(x+a);
  }
  printf("Sum = %d", sum);
  return 0;
}
