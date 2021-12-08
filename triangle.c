#include<stdio.h>
main()
{
	float a,b,c;
	printf("enter lenght of first side:");
	scanf("%f",&a);
		printf("enter lenght of second side:");
	scanf("%f",&b);
		printf("enter lenght of third side:");
	scanf("%f",&c);
	if(a=b=c)
	{
		printf("it is a equilateral triangle");
	}
	else
	if(a=='b' || a=='c' || b=='c')
	{
		printf("it is a isosceles triangle");
	}
}
