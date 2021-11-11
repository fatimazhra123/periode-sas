   #include <stdio.h>
    #include <stdlib.h>

    int main()
    {


    int metre ;
    double mille;

    printf("entrer la distance en mille\n");
    scanf("%f",&mille);

    metre =(mille/1.609)/1000;
    printf("la distance en metre EST :%d",metre);
        return 0;
    }
