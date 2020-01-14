#include <stdio.h>

void main(){
    //variaveis
    float graus;
    float fn;
    //variaveis

    //input e output
    printf("Insere uma temperatura em Fahrenheit:\n");
    scanf("%f",&fn);
    //input e output

    //processo
    graus = (fn-32)*5/9;
    //processo

    //output final
     printf("%.2f graus Fahrenheit é %.2f graus Celsius.\n",fn,graus);

}