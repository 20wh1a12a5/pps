#include<stdio.h>
int main()
{
	int p,r,t,int_amt;
	printf("input principle, rate of interest & time to find simple interest: \n");
	scanf("%d%d%d" ,&p,&r,&t);
	int_amt=(p*r*t)/100;
	printf("simple interest =%d",int_amt);
	return 0;
}
