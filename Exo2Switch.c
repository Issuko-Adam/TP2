#include <stdio.h>

int main(){

    int statut;
    scanf("%d", &statut);

    switch(statut){
        case 1 : 
            printf("Present\n");
            break;
        case 2 : 
            printf("Present\n");
            break;
        case 3 : 
            printf("Present\n");
            break;
        case 4 : 
            printf("Present\n");
            break;
        case 5 : 
            printf("Present\n");
            break;
        case 6 : 
            printf("Astreinte\n");
            break;
        case 7 : 
            printf("Conge\n");
            break;
        default : 
            printf("Erreur");        
    }


}