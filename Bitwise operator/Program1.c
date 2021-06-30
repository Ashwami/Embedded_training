/* Program to swap the nibble in a byte */

#include<stdio.h>
unsigned char swapnibbles(unsigned char x)
{
  return((x & 0x0F)<<4|(x & 0xF0)>>4);
  }
  
  int main()
  {
  unsigned char x=100;
  printf("%u\n", swapnibbles(x));
  return 0;
  }
  
