#include <stdio.h>
  
  int main()
{
   float t;
   float f;

   printf("enter temperature et la Fahrenheit : ");
   scanf("%f",&t);
  
   f=(t * 1.8) + 32;
   printf("temperature C est : %.2f \n",f);

  return 0;
};