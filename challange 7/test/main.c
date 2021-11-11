#include <stdio.h>
#include <stdlib.h>

int main()
{

 int  x1,x2 , y1 ,y2 ;
 int  cal1 , cal2 , som1,som2;
 float mn ;
 printf(" entrez  x1:  " );
    scanf("%d",&x1);
printf(" entrez y1:  " );
scanf("%d",&y1);
printf(" entrez x2:  " );
scanf("%d",&x2);
printf(" entrez y2:  " );
scanf("%d",&y2);
som1 = x2 - x1;
som2 = y2 - y1;
cal1 = pow(som1,2);
 cal2 = pow(som2,2);
 mn = sqrt(cal1+cal2);

printf(" la distance entre M et N est : %2f", mn);  return 0;
}
