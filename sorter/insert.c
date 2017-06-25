#include "head.h"

void insert(int *d, int size)
{
	for(int i = 1; i < size; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(*(d+j-1) > *(d+j))
			{
				swap(d+j-1,d+j);
			}
			else
			{
				break;
			}
		}
	}
}
