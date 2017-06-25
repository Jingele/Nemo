#include "util.h"

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void display(int *s, int size)
{
	int i;
	printf("total %d number:\n",size);
	for(i =0; i < size; i++)
	{
		printf("%d\t",*(s+i));
	}
	printf("\n");
}

