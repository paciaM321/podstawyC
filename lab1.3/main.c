#include <stdio.h>

int main()
{
	double doubleA, doubleB;
	
	printf("\npodaj liczbe A:");
	scanf("%lf", &doubleA);

	printf("\npodaj liczbe B:");
	scanf("%lf", &doubleB);

	if (doubleA > doubleB)
	{
		printf("\nliczba A jest wi�ksza: %lf", doubleA);

	}
	else
	{
		printf("\nliczba B jest wi�ksza: %lf", doubleB);
	}
	return 0;
}