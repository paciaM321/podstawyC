#include <stdio.h>

int main()
{

	//deklaracaja zmiennych wraaz z inicjalizacj¹
	int n;
	int liczba;

	//pobieranie liczb z klawiatury 
	printf("Podaj liczbe: ");
	scanf("%d", &n); //wczytanie liczby z klawiatury 

	 liczba = n % 2;
	
	if(liczba = 0)
		{
		printf("liczba parzysta");
	}
	else {
		printf("liczba nie parzysta");
	}

	return 0;
}