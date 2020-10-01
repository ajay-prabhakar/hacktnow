//largest 3 elements in an array


#include <stdio.h> 
int main() 
{ 
    int a[100] ,n,i,first,second,third ; 
    printf("size of the array is:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
      }
  if (n < 3) 
    { 
        printf(" Invalid  "); 
        return; 
      } 
  for (i = 0; i < n; i++)
 { 
     if (a[i] > first) 
        { 
            third = second; 
            second = first; 
            first = a[i]; 
        } 
   else if (a[i] > second)
       { 
            third = second; 
            second = a[i]; 
        } 
    else if (a[i] > third) 
       {
            third = a[i];
         }
} 
 printf(" The 3 largest elements are: %d %d %d\n", first, second, third); 
   return 0; 
}
