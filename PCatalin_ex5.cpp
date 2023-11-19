#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Functia care numara zerourile semnificative din reprezentarea binara
int zero(unsigned int numar) {
    int count = 0;

    while ((numar & 1) == 0 && numar != 0) {
        count++;
        numar >>= 1;
    }

    return count;
}

int main() {
    unsigned int numar;

    printf("Introduceti un numar intreg: ");
    scanf("%u", &numar);

    int numarzero = zero(numar);
    printf("Numarul de zerouri semnificative din reprezentarea binara a numarului %u este: %d\n", numar, numarzero);

    return 0;
}