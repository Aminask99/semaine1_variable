#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float rayon,c;
const P=3.14;
printf("entrer le rayon \n");
scanf("%f",&rayon);
c=2*P*rayon;
printf("la circonférence  est :%.2f",c);
   
return 0;
}