#include <stdio.h>
int main()
{
int c[10], d[10], flag = 0, n1, n2, i, j;
scanf(" %d ",&n1);
scanf(" %d ",&n2);
for(i = 0;i < n1;i++)
scanf("%d",&c[i]);
for(i = 0;i < n2;i++)
scanf("%d",&d[i]);
  
  
printf("Intersection: ");
  
   for(i = 0;i < n1;i++)
{
   for(j = 0;j < n2;j++)
{if(b[i] == a[j])
{
flag = 1;
}
}
if(flag == 1)
{
printf(" %d ", b[i]);

}
flag = 0;
}
return 0;
}
