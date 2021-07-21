#include<stdio.h>

int main()
{
   float length, width ,perimeter; 
	printf("enter the values of primeter");
	scanf("%f %f",&length,&width);
   perimeter = 2*(length + width);
	printf(" %f",&perimeter);
	
	
  float radius, area;
     printf("enter radius of circle: ");
     scanf("%f" ,&radius);
     area=perimeter*radius*radius;
     perimeter=2*perimeter*radius;
     printf("area , perimeter of circle :%f %f\n");
     return 0;
 } 

