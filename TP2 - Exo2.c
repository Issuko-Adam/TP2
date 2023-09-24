#include <stdio.h>

int main(){
  
  int statut; 
  scanf("%d", &statut);
  if (statut < 1 || statut >7) {
    printf("erreur\n");
    return 0 ;
  }
  if (statut >= 1 && statut <=5) {  
    printf("present\n");
  } else if (statut == 6) {
    printf("astreinte\n");
  } else /* pas besoin de condition ici parce que si t'arrives ici statut est forcément egal a 7*/ {
    printf("conge\n");
  }
}
