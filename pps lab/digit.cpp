#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character: ");
	scanf("%c", &ch);
	if ((ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch <= 'Z'))
	   printf("'%c' is alphabet.", ch);
	else if(ch >= '0' && ch <= '6')
	   printf("'%c' is digit.", ch);
	else
        printf("'%c' is special character.", ch);
	return 0;
}
