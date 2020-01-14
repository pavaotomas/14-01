#include <stdio.h>

void main(){
    //variaveis
    int menu;
    float n1;
    float n2;
    float fim;
     //variaveis

//menu
    printf("\t1-Multiplicação\n\t2-Divisão\n\t3-Adição\n\t4-Subtração\n");
    scanf("%d",&menu);
//menu
    printf("Insere um numero:\n");
    scanf("%f",&n1);
    printf("Insere outro numero:\n");
    scanf("%f",&n2);
//switch do menu
    switch(menu){
        case 1:
        fim = n1*n2;
        printf("O valor da multiplicação é %.2f\n",fim);
        break;

        case 2:
        fim = n1/n2;
        printf("O valor da divisão é %.2f\n",fim);
        break;

        case 3:
        fim = n1+n2;
        printf("O valor da adição é %.2f\n",fim);
        break;

        case 4:
        fim = n1-n2;
        printf("O valor da subtração é %.2f\n",fim);
        break;

        default:
        printf("Insere um valor valido!");
        break;
    //switch do menu
    }
}