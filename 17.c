#include <stdio.h> //union
int main()
{
int c[10], d[10], flag = 0, k1, k2, i, j
  
printf("Enter array1 size : ");
  
scanf("%d",&k1);
printf("\nEnter array2 size : ");
scanf("%d",&k2);
printf("\nEnter array1 element : ");
for(i = 0;i < k1;i++)
scanf("%d",&c[i]);
printf("\nEnter array2 element : ");
for(i = 0;i < k2;i++)
scanf("%d",&d[i]);
printf("\nUnion:");
  
for(i = 0;i < k1;i++)
printf("%d, ",c[i]);
for(i = 0;i < k2;i++)
{
for(j = 0;j < k1;j++)
{
if(d[i] == c[j])
{
flag = 1;
}
}
if(flag == 0)
{
printf("%d, ",d[i]);
}
flag = 0;
}
return 0;
}
