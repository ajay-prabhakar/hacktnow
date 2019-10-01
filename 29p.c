#include <stdio.h>
int main()
{
   int* pc, n;
   
   n = 22;
   
   printf("Address of c: %u\n", &n);
   printf("Value of c: %d\n\n", n);
   
   pc = &n;
   printf("Address of  pc: %u\n", pc);
   printf("Content of  pc: %d\n\n", *pc);
   n = 11;
   printf("Address of pointer pc: %u\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc);
   
   *pc = 2;
   printf("Address of c: %u\n", &n);
   printf("Value of c: %d\n\n", n);
   return 0;
}
