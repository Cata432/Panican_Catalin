#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numar;
    printf("introduceti un numar intreg: ");
    scanf("%d", &numar);

    printf("valoarea decimala a fiecarui octet in intreg este : ");

    for (int i = 0; i < sizeof(int); i++) {
        unsigned char byte = (numar >> (i * 8)) & 0xFF;

        printf("octet %d: %u\n", i + 1, byte);
    }

    return 0;
}