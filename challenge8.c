#include <stdio.h>


int main()
{
   int nbr1,nbr2,nbr3,somme;
   float Moyenne;
   printf("entrer votr nombr 1 \n");
   scanf("%d",&nbr1);
   printf("entrer votr nombr 2 \n");
   scanf("%d",&nbr2);
   printf("entrer votr nombr 3 \n");
   scanf("%d",&nbr3);
   somme=nbr1+nbr2+nbr3;
   Moyenne=somme/3;
   printf(" la somme est : %d\n la moyenne est : %.2f\n",somme,Moyenne);
   
 return 0;
}