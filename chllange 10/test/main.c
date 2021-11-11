#include <stdio.h>
#include <stdlib.h>

int main()
{

const float P = 3.14 ;
 int  R ;
 float cercle ;

 printf(" entrez  rayon :  " );
    scanf("%d",&R);
cercle= 2*R*P ;

printf("  la circonférence du cercle  est : %2f", cercle);
    return 0;
}
