#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int l1, l2, l3;
	printf("introduceti valoarea primei laturi: ");
	scanf("%i", &l1);
	printf("Introduceti valoarea celei de a doua laturi: ");
	scanf("%i", &l2);
	printf("Introduceti valoarea celei de a treia laturi: ");
	scanf("%i", &l3);
	float s = ((float)l1 + l2 + l3) / 2 ; // semiperimetru 
	float a = sqrt(s * (s - (float)l1) * (s - l2) * (s - l3)); // calcul arie folosind formula lui heron
	printf("aria triunghiului este : %.2f", a); 

}