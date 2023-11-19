#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Func?ia pentru extragerea secven?ei de bi?i specificat?
unsigned long long getsets(unsigned long long x, int p, int n) {
    return (x >> (p - n + 1)) & ((1ULL << n) - 1);
}

// Func?ia pentru afi?area valorilor în diferite baze numerice
void printValues(unsigned long long value) {
    printf("Valoarea in decimal este: %llu\n", value);
    printf("Valoarea in binar este: %llx\n", value);
    printf("Valoarea in octal este: %llo\n", value);
    printf("Valoarea in hexazecimal este: %llx\n", value);
}

int main() {
    unsigned long long x;
    int p, n;

    printf("Introduceti valoarea lui x: ");
    scanf("%llu", &x);

    printf("Introduceti pozitia p (0-%d): ", 8 * sizeof(x) - 1);
    scanf("%d", &p);

    printf("Introduceti numarul de biti n: ");
    scanf("%d", &n);

    if (p >= n && p < 8 * sizeof(x)) {
        unsigned long long result = getsets(x, p, n);
        printf("Rezultatul este:\n");
        printValues(result);
    }
    else {
        printf("Pozitie sau numar de biti incorecte!\n");
    }

    return 0;
}