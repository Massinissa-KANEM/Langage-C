#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
    printf("vos trois chiffres :");

    int i;
    int nombre;
    int reste;
    int table[8];

    printf("le nombre :");
    scanf("%d", &nombre);

    for(i=0 ; i<8 ; ++i) {
        reste = nombre%10;
        table[i] = reste;
        nombre /= 10;
    }
    for(i=0 ; i<8 ; ++i) {
        printf("%d", table[i]);
    }
    return 0;
}
