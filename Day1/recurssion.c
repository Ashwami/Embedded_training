#include<stdio.h>

 void display(int num)
 {
 if (num)
 display (num-1);
 else
   return;
   printf("\n%d\n", num);
   }


int main()
{
 int limit = 12;
 /* printf("Enter the number\n");*/
 /*Scanf("%d", & limit);*/
 
 display(limit);
 return 0;
 }
 







