#include <stdio.h>
#include <stdlib.h>

int main()

{
    float tomperateur;

    float resultat;

     printf("entrer la temperature en Fahrenheit\n");
     scanf("%2f",&tomperateur);

     resultat =(tomperateur-32)/1.8;

     printf(" degré Celsius %2f",resultat);
    return 0;
}
