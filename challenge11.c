 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main ()
 {

 float c, longueur ,largeur;
printf("entrer longueur de rectangle :\n");
scanf("%f",&longueur);
printf("entrer largeur de rectangle :\n");
scanf("%f",&largeur);
 c=2*(longueur + largeur);
 printf("la circonférence de rectangle  est : %.2f cm ",c);
   
 return 0;
}   