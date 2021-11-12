#include <stdio.h>
int main()
{

   float m;
   float mile;
   float km;


   printf("\n");

   printf("enter distance on m : \n");
   scanf("%f",&m);
   km = (m / 1000);
   mile = km / 1.609;
   printf("distance on mile is : %.2f mile. \n",mile);
   printf("\n");
   
    return 0;
}
