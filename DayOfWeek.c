#include <stdio.h>

int main() {
    int dia;

    printf("\nDigite um dia da semana: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("\nDomingo");
            break;
        case 2:
            printf("\nSegunda");
            break;
        case 3:
            printf("\nTerça");
            break;
        case 4:
            printf("\nQuarta");
            break;
        case 5:
            printf("\nQuinta");
            break;
        case 6:
            printf("\nSexta");
            break;
        case 7:
            printf("\nSábado");
            break;
        default:
            printf("Dia não existente");
            break;
    }

    return 0;
}
