#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	float a, b, c, d, x;
	printf("introduceti valoarea lui a: ");
	scanf("%f", &a);
	printf("introduceti valoarea lui b: ");
	scanf("%f", &b);
	printf("introduceti valoarea lui c: ");
	scanf("%f", &c);
	printf("introduceti valoarea lui d: ");
	scanf("%f", &d);
	printf("introduceti valoarea lui x: ");
	scanf("%f", &x);
	float polinom = a * x * x * x + b * x * x + c * x + d;
	printf("rezultatul este: %.2f", polinom); 

}