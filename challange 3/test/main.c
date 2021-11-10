#include <stdio.h>
#include <stdlib.h>

int main()


{
   int metre;
int mille;
int kilomtre;
printf("entrer la distance en metre ");
scanf("%d",&metre);

kilomtre = metre*1000;
mille = kilomtre *1.609;

printf("la distance en mille %d",mille);

    return 0;
}
