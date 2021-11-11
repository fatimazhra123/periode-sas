#include <stdio.h>
#include <stdlib.h>

int main()
{

 int  a ,b,c  ;

 float mn ;
 printf(" entrez nomber:  " );
    scanf("%d",&a);

 c=a ;
 b= (a%10)*100;
 a=a/10;

 b=b+(a%10)*10;
 a/=10;
 b+=a;


printf(" le nomber  %d  inverse est  : %d", c , b);

    return 0;
}
