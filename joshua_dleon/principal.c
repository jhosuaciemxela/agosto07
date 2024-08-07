#include <stdio.h>
int main()
{
    int resul4,resul3,resul2,resul1,num1,num2;
    printf("ingrese un numero: ");
    scanf("%d",&num1);
    printf("ingrese un nuevo numero: ");
    scanf("%d",&num2);
    resul1=num1+num2;
    resul2=num1-num2;
    resul3=num1/num2;
    resul4=num1*num2;
    printf("el resultado de la suma es: %d\n",&resul1);
    printf("el resultado de la resta:  %d\n",&resul2);
    printf("el resultado de la division:  %d\n ",&resul3);
    printf("el resultado de la multipicacion:  %d\n",&resul4);
return 0;
}