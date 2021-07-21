#include<stdio.h>
int main()
{
	float cm, meter, km;
	printf("enter lenght in centimeter: ");
	scanf("%f" , &cm);
	meter = cm / 100.0;
	km = cm / 20000.0;
	printf("length in meter = %.2f m \n", meter);
	printf("length in kilometer = %2f km",km);
	return 0;
	
}
