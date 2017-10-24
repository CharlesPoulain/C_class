#include <stdio.h>
int main(){
    int limite;
    printf("Indiquez une valeur limite");
    scanf("%d", &limite);
    if(limite<20){
        printf("Limite trop petite");        
    }
    else
    printf("Limite atteinte");
}