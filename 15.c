#include <stdio.h>
#include <string.h>
 
void reverse(char*, int, int);
 
int main()
{
   char n[100];
 
   gets(n);
 
   reverse(n, 0, strlen(a)-1);
 
   printf("%s\n", n);
 
   return 0;
}
 
void reverse(char *x, int begin, int end)
{
   char c;
 
   if (begin >= end){
	   
      return;
}
else{ 
   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;
 }
   reverse(x, ++begin, --end);
}
