#include <stdio.h>

int main()
{
	double liczba1;
	double liczba2;
	double liczba3;
	double liczba4;
	double suma;
	printf("podaj liczbe 1; ");
	scanf("%lf", &liczba1);

	printf("podaj liczbe 2; ");
	scanf("%lf", &liczba2);

	printf("podaj liczbe 4; ");
	scanf("%lf", &liczba3);

	printf("podaj liczbe 4; ");
	scanf("%lf", &liczba4);
	
	suma = liczba1 + liczba2 + liczba3 + liczba4;
	printf("srednia: %lf\n", suma / 4);


	return 0;
}