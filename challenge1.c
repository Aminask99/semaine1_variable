#include <stdio.h>
#include <stdlib.h>

int main()
{
     
char nom[20],prenom[20],sexe[22];
     int age,num;
     printf("entrer votre nom :");
     scanf("%s",&nom);
      printf("entrer votre prenom :");
     scanf("%s",&prenom);
     printf("entrer sex :");
     scanf("%s",&sexe);
     printf("votr age  :");
     scanf("%d",&age);
     printf("entrer num :");
     scanf("%d",&num);
     printf("%s\n %s\n %s\n %d\n %d\n",nom,prenom,sexe,age,num); 


    return 0;
}