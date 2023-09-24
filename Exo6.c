#include <stdio.h>

int main(){
    unsigned int coeff = 1;
    float note = 0;
    float sommecoefnote = 0;
    int sommecoef = 0;
    

    while(coeff != 0){
        printf("saisir coefficient: ");
        scanf("%u", &coeff);

        printf("saisir note: ");
        scanf("%f", &note);

        sommecoefnote += coeff*note;
        sommecoef += coeff;
    }

        printf("Le résultat est %f \n", sommecoefnote / sommecoef);
}