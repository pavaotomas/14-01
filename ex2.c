#include <stdio.h>

void main(){
    int num;
    int ant;
    int dep;

    printf("Insira um numero:\n");
    scanf("%d",&num);

    dep=num+1;
    ant=num-1;
    printf("O antecessor é %d e o sucessor é %d.\n",ant,dep);
}