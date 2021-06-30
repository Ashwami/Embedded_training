/*Draw the memory layout for big and little endian*/

#include<stdio.h>
int main()
{
 union{
   int x;
   short sh;
   char c[2];
   char ch[4];
   }var;
   
   var.x=0x12345678;
   printf("0x%x 0x%x 0x%x\n", var.sh, var.c[0],var.c[1]);
   printf("0x%x 0x%x 0x%x 0x%x\n",var.c[0],var.c[1],var.ch[2],var.ch[3]);
  #if 0
   if(var.c[0]==1)
   printf("Little endian\n");
   else
   printf("big endian\n");
   #endif
   }
   
 
   
