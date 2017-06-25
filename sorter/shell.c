#include "head.h"

void shell(int *d, int size)
{
	int step = 1;
	int t ;
	while(t<size)
	{
		step *= 3;
		t = step + 2;
	}
	// d + 0*step +i; d +1*step +i;...; d +k*step +i
	while(step >= 1)
	{
		for(int i = 0; i < step;i++)
		{
			for(int k = 0; k*step+i < size; k ++)
			{
				for(int j = k+1;(j-1)*step + i >= 0 && j*step+i < size;j--)
				{
					if(*(d+(j-1)*step+i) > *(d+j*step+i))
					{
						swap(d+(j-1)*step+i,d+j*step+i);
					}
					else
					{
						break;
					}
				}
			}	
		}
		step /= 2;
	}
}

