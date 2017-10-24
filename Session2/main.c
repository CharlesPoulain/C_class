#include <stdio.h>
int main(){
    int limite;
    printf("Indiquez une valeur limite");
    scanf("%d", &limite);
    if(limite<20){
        printf("Limite %d trop petite", limite);        
    } else if (limite == 20){
        printf("La valeur %d est parfaite", limite);
    }
    else
        printf("La valeur %d est au dessus de la limite", limite);
}