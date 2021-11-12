#include<stdio.h>
#include<stdlib.h>
int main()
{


int number = 0;
    int n;

    printf("enter number a : ");

    scanf("%d",&n);

      number = (n%10)*100;
      n=n/10;
      number = number + (n%10)*10;
      n = n/10;
      number=number+n;

    printf("the opposite of n is : %d\n", number);
    return 0;
   
}