#include <stdio.h>
#include <math.h>

int main(){

    int nombre;
    unsigned int gauche;
    unsigned int droite;
    int length = 0;
    int temp; // pour calculer la longeur de la variable nombre sans détruire nombre
    int denom;

    printf("Entre ton nombre clochard : ");
    scanf("%d", &nombre);
    nombre *= nombre;
    temp = nombre;

    while(temp != 0){
        temp /= 10;
        length++;
    }

    if(length % 2){
        printf("Votre nombre n'est pas un nombre de chokbar");
        return 0;
    }

    denom = pow(10, length / 2);

    gauche = nombre / denom;
    droite = nombre % denom;
    printf("%d, %d", gauche, droite);

    if(gauche + droite == sqrt(nombre)){
        printf("Votre nombre est un nombre de Chokbar");
    }
    else {
        printf("Votre nombre n'est pas un nombre de chokbar");
    }


   


}