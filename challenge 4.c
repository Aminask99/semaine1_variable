#include <stdio.h>
#include <stdlib.h>


int main()
{

   float mile;
   float m;
   float km;

   printf("enter distance en mile : \n");
   scanf("%f",&mile);
   km = mile*1.609;
   m = km * 1000;
   printf("distance en m est : %.2f \n",m);



 return 0;
}


   