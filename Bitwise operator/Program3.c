/* Program with macro to find even/odd using bitwise operator */

#include<stdio.h>
#define IS_ODD(x) (x&1)

int main()
{
  int num=11;
  if(IS_ODD(num))
   printf("%d is Odd\n", num);
   else
   printf("%d is Even\n", num);
   return 0;
   }
   
