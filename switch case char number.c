#include<stdio.h>
main()
{
	char c,a,b;
	printf("enter any character:");
	scanf("%c",&c);
	a=(c>65 && c<91);
	b=(c>97 && c<123);
	switch(c)
	{
		case 'a':printf("character");break;
		case 'b':printf("character");break;
		default :printf("number");break;
	}
	
}
