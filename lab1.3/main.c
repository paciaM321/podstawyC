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
		printf("\nliczba A jest wiêksza: %lf", doubleA);
	}
	else if (doubleA == doubleB)
	{
		printf("\nliczy sa takie same");
	}

	else
	{
		printf("\nliczba B jest wiêksza: %lf", doubleB);
	}
	return 0;
}