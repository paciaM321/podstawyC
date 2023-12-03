#include <stdio.h>

int main()
{
	double liczba1;
	double liczba2;
	double liczba3;
	double liczba4;
	double suma;


	printf("podaj liczbe 1; ");
	scanf("% ls ", &liczba1);

	printf("podaj liczbe 2; ");
	scanf("% ls ", &liczba2);

	printf("podaj liczbe 3; ");
	scanf("% ls ", &liczba3);

	printf("podaj liczbe 4; ");
	scanf("% ls ", &liczba4);
	
	suma = liczba1 + liczba2 + liczba3 + liczba4;
	printf("srednia ; %f ", suma / 4);


	return 0;
}