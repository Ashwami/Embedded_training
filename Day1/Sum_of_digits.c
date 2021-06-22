#include<stdio.h>
int main()
{
int num=24;
int sum=0, rem;
/*printf("Enter number: ");*/
/*scanf("%d" &num);*/
 while(num/10!=0)
  {
     sum=0;
     while(num!=0)
     { 
       rem=num%10;
       sum+=rem;
       num=num/10;
      }
      num=sum;
      }
      printf("%d\n", sum);
      return 0;
      }
      
