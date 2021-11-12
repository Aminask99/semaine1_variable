#include <stdio.h>
  
  int main()
{
   float t;
   float f;

   printf("enter temperature et la Fahrenheit : ");
   scanf("%f",&f);
  
   f=(f * 1.8) + 32;
   printf("temperature C est : %.2f \n",t);

  return 0;
};