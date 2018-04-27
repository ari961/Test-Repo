//This Source code is perfectly runs on Turbo C++
#include <stdio.h>
#include <conio.h>

void main()
{
	int a=-1,b=1,n,c,i;
	clrscr();
	printf("\t\t\t-----:Fibonacci Series:-----");
	printf("\n\nEnter the limitation of the series:: ");
	scanf("%d",&n);
	printf("\nThe Fibonacci series is:-\n\n");
	for(i=0;i<=n;i++)
	{
		c=a+b;
		if(c!=0)     // Series starts with 1
		{
			printf(" %d,",c);
		}
		a=b;
		b=c;
	}
	printf("\n\npress any key to exit");
	getch();
}
