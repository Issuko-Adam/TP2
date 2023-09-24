#include <stdio.h>
#pragma warning(disable : 4996)
int main() {
    int taille;
    int i = 0;
    int somme = 0;
    int min = 0;
    int max = 0;

    scanf("%d", &taille);
    do {
        
        somme = somme + taille;
        if (max < taille) {
            max = taille;
        }
        if (min == 0){
            min = taille;
        }
        else if (min > taille) {
            min = taille;
        }
        

        i++;
        scanf("%d", &taille);
    } while (taille != 0);

    printf("La taille moyenne est %d,\n", somme / i);
    printf("La taille minimum est %d, \n", min);
    printf("La taille maximale est %d, \n", max);
    // printf(); tu dois printf la taille min, moyenne, et max. 
}