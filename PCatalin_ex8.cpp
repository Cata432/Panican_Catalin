#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char caracter;

    printf("Introduceti literele mici: ");

    while ((caracter = getchar()) != '\n') {

        char transformare_aritmetica = caracter - 32; 

        char transformare_logica = caracter & ~32;

        printf("litera initiala: %c | Aritmetic: %c | Logic: %c\n", caracter, transformare_aritmetica, transformare_logica);
    }

    return 0;
}