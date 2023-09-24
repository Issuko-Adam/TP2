#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d", &a);
    a >= 1 && a <= 5 ? printf("present\n") : 
        (a == 6 ? printf("astreinte\n") : 
            (a == 7 ? printf("absent\n") : printf("error\n")));
}