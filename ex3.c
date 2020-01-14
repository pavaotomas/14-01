#include <stdio.h>

void main(){
    //variaveis
    int num;
    float n1;
    float n2;
    float n3;
    //variaveis
    
    //input e output
    printf("Insira o valor de premio:\n");
    scanf("%d",&num);
    //input e output

    //processo de calculo
    n1 = num*0.46;
    n2 = num*0.32;
    n3 = num*0.22;
    //processo de calculo

    //outputs finais
    printf("O vendedor nº1 recebe: %.2f€\n",n1);
    printf("O vendedor nº1 recebe: %.2f€\n",n2);
    printf("O vendedor nº1 recebe: %.2f€\n",n3);
    


}