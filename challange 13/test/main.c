#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("donner un entiers de 3 chiffre:");
    scanf("%d",&a);
    c=a;
    b=(a%10*100);
    a=a/10;
    b=b+(a%10)*10;
    a/=10;
    b+=a;
    b+=a;
    printf("le nombre%dinverse est%d\n",c,b);

    return 0;
}
