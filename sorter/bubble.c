#include "head.h"

void bubble(int *s, int size)
{
	int i, j;
	for(i = size; i > 0; i--)
	{
		for(j = 1; j < i; j++)
		{
			if(*(s+j-1) > *(s+j))
			{
				swap(s+j-1, s+j);
			}
		}
	}
}
