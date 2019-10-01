#include <stdio.h>
#include <string.h>
 
void reverse(char*, int, int);
 
int main()
{
   char x[100];
 
   gets(x);
 
        reverse(x, 0, strlen(a)-1);
 
   printf("%s\n", x);
	
	
 
   return 0;
}
 
   void reverse(char *y, int begin, int end)
{
	   
   char c;
 
   if (begin >= end){
	   
      return;
}
    else{ 
   c        = *(y+begin);
   *(y+begin) = *(y+end);
   *(y+end)   = c;
 }
   reverse(y, ++begin, --end);
}
