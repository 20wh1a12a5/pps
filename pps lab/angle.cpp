#include<stdio.h>
int main()
{
	int p, q, r;
	printf("enter the two angles of triangle:");
	scanf("%s%d", &p, &q);
	r = 180 - (p + q);
	printf("\nthird angle of the triangle = %d", r);
	return 0;
}
