#include "head.h"

void selector( int *d, int size)
{
	int i, j, 
	min,k;// d denotes the position of min
	for(i = 0; i < size; i++)
	{
		min = *(d+i);
		for(j= i+1; j < size;j++)
		{
			if(min > *(d+j))
			{
				min = *(d+j);
				k = j;
			}
		}
		swap(d+i,d+k);
	}
}
