#include<stdio.h>

int decimal(int);
int main()

{
 int no=7;
 int bin;
 bin=decimal(no);
 
 printf("Decimal(%d)=Binary(%d)\n", no, bin);
 
 return 0;
 }
 
 
 int decimal(int no)
 {
  if (no == 0)
    return 0;
    else
    return((no % 2) +10 * decimal(no / 2 ));
    }
 

