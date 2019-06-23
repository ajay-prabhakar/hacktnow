#include <stdio.h>
#include <string.h>
 
void reverse(char*, int, int);
 
int main()
{
  char a[100];
 
      gets(a);
 
 reverse(a, 0, strlen(a)-1);
 
       printf("%s\n", a);
 
   return 0;
           }
 
void reverse(char *y, int begin, int end)
{
   char c;
 
   if (begin >= end){
	   
      return;
}
else{ 
   c          = *(y+begin);
   *(y+begin) = *(y+end);
   *(y+end)   = c;
 }
   reverse(y, ++begin, --end);
}
