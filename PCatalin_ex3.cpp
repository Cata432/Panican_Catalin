#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bit(unsigned char a) {
    printf("Valorile bitilor pentru %u sunt: \n", a);
    for (int i = 7; i >= 0; --i) {
        unsigned char bit = (a >> i) % 2;
        printf("%u ", bit);
    }
    printf("\n");
}

int main() {
    unsigned char b;
    printf("introduceti un numar: ");
    scanf("%hhu", &b);

    bit(b);
}