#include <stdio.h>

int main(){

unsigned int operation;
int solde = 0;
int retrait;
int depot;
    while(1){
        printf("operation voulue?");
        scanf("%u", &operation);
        if (operation == 0)
        {
            printf("combien voulez vous retirer?: ");
            scanf("%d", &retrait);
            if(retrait > solde){
                printf("Erreur, solde insuffisant\n");
            }
            else {
                solde -= retrait;
            }
        }
        else if(operation == 1){
            printf("Combien voulez vous deposer sur votre compte?: ");
            scanf("%d", &depot);
            solde +=  depot;
        }
        else {
            printf("Erreur, operation inconnue\n");    
        }

        printf("Nouveau solde : %d\n", solde);
    }
}