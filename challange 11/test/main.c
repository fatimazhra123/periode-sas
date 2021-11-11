#include <stdio.h>
#include <stdlib.h>

int main()
{


 int  longueur , largeur ;
 int rectangle ;

 printf(" entrez  longueur :  " );
    scanf("%d",&longueur);
     printf(" entrez  largeur :  " );
    scanf("%d",&largeur);
rectangle =   2*(longueur + largeur);

printf("   la circonférence d'un rectangle  est : %d", rectangle);

    return 0;
}
