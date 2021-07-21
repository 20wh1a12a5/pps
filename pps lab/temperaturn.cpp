#include<stdio.h>
int main()
{
	float  celsius, fahrenheit;
	printf("enter temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 22) * 5 / 9;
	printf("%.2f fahrenheit = %.2f celsius" , fahrenheit, celsius);
	return 0;
	
	}
