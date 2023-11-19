#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float a, b;
    printf("Introduceti valoarea primului numar real: ");
    scanf("%f", &a);

    printf("Introduceti valoarea celui de-al doilea numar real: ");
    scanf("%f", &b);

    float suma = a + b;
    float scadere = a - b;
    float inmultire = a * b;
    float impartire = a / b;

    printf("rezultatul sumei este: %.2f\n", suma);
    printf("rezultatul scaderii este: %.2f\n", scadere);
    printf("rezultatul inmultirii este: %.2f\n", inmultire);
    printf("rezultatul impartirii este: %.2f\n", impartire);

    int rotunjiresuma = (int)suma;
    int rotunjirediferenta = (int)scadere;
    int rotunjireinmultire = (int)inmultire;
    int rotunjireimpartire = (int)impartire;

    printf("rezultatul sumei rotujit este: %d\n", rotunjiresuma);
    printf("rezultatul scaderii rotujit este: %d\n", rotunjirediferenta);
    printf("rezultatul inmultirii rotujit este: %d\n", rotunjireinmultire);
    printf("rezultatul impartirii rotujit este: %d\n", rotunjireimpartire);

    // G?sirea valorii minime dintre cele dou? numere
    float minim = (a < b) ? a : b;
    printf("Valoarea minima este: %.2f\n", minim);

    return 0;
}