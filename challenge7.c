#include <stdio.h>


int main()
{
   int a,b,somme,soustraction,produit,divition,rest;
   printf("entrer la valeur de a \n ");
   scanf("%d",&a);
   printf("entrer la valeur de b \n ");
   scanf("%d",&b);
   somme=a+b;
   soustraction=a-b;
   produit=a*b;
   divition=a/b;
   rest=a%b;
   printf(" la somme est : %d\n la soustractionest est : %d\n la produit est : %d\n la divition est : %d\n le rest est : %d\n",somme
   ,soustraction,produit,divition,rest); 
    return 0;
}