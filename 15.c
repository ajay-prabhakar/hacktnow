#include <stdio.h>
#include <string.h>
 
void reverse(char*, int, int);
int main()
{
   char X[100];
 
   gets(p);
 
        reverse(p, 0, strlen(a)-1);
 
   printf("%s\n", p);
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
