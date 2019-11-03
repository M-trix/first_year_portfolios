#include <stdio.h>
#include <conio.h>

void main()
{
	int i=0,j=4,k=0;
	while(i<5)
	{
		while(k<i)
		{
			printf(" ");
			k++;
		}
		k=0;
		while(j>i)
		{
			printf("*");
			j--;
		}
		j=4;
		printf("\n");
	}
}