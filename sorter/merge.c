#include "merge.h"
#include "head.h"

void join(int *d, int low, int mid, int high)
{
	//merge d[low,mid] and d[mid+1,high]
	int i = low;
	int j = mid +1;
	int *st = (int*)malloc(sizeof(int)*(high-low+1));
	int *p = st;
	while(i<= mid && j <=high)
	{
		if(*(d+i) <= *(d+j))
		{
			*(st++) = *(d+i++);
		}
		else
		{
			*(st++) = *(d+j++);
		}
	}
	while( i > mid && j <= high)
	{
		*(st++) = *(d+j++);
	}
	while( i<=mid && j> high)
	{
		*(st++) = *(d+i++);
	}
	st = p;// point to the start.
	for(int k = low; k <= high; k++)
	{
		*(d+k) = *(st++);
	}
	free(p);
}


void join_step(int *d, int step, int size)
{
//	[(i-1)*step,i*step-1], [i*step, (i+1)*step-1]
// low:(i-1)*step, mid:i*step-1, high:(i+1)*step-1;
	int i;
	for(i = 1; (i+1)*step-1 < size ; i+=2)
	{
		join(d,(i-1)*step,i*step-1,(i+1)*step-1);	
	}
	if(i*step-1 < size)
	{
		join(d,(i-1)*step,i*step-1,size-1);
	}
	else
	{
		;
	}
}



void merge(int *d, int size)
{//iteration, step longer and longer.
	for(int step = 1; step < size; step*=2)
	{
		join_step(d,step,size);
	}
}

void merger(int *d, int size)
{//recursing call itself;
	if(size <= 1)
	{
		return;
	}
	else
	{
		int m = size/2;

		int *L = d;
		int sL = m;
		//[d,d+m-1] [d+m,d+size-1]
		int *R = d+sL;
		int sR = size - sL;
		merger(L,sL);
		merger(R,sR);
		join(d,0,m-1,size-1);
	}
}
