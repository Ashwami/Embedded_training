/* Program to count set bits */

#include<stdio.h>

unsigned int countsetbits(unsigned int n)
{ 
   unsigned int count =0;
   while(n)
   {
     count += n & 1;
     n >>= 1;
    }
    return count;
  }
  int main()
  {
    int i= 2;
    printf("Set bits:%d\n", countsetbits(i));
    return 0;
    }
