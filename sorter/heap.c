#include "heap.h"
#include "head.h"

//max heap, with the root as the maximun

void sinker(int *p, int i, int size)
{
	while(2*i <= size)
	{
		int j = 2*i;//the min of the one child
		if(j < size && !less(p+j,p+j+1))
		{//the min of the two child;
			j++;
		}
		if(!less(p+i,p+j))
		{
			swap(p+j,p+i);
			i = j;
		}
		else
		{
			break;
		}
	}
}


void sink(int *p,int i,int size)
{
	while(2*i < size)	
	{
		int* pt = less(p+2*i+1,p+2*i)? (p+2*i):(p+2*i+1);
		if(less(p+i,pt))
		{
			swap(pt,p+i);
			i = pt-p;
		}
		else
		{
			break;
		}
	}
	if(2*i == size) 
	{//if the node has only one child ?
		if(less(p+i,p+2*i))
		{
			swap(p+i,p+2*i);
		}
		else
		{
			;
		}
	}
}


void swin(int *p, int i)
{
	while(less(p+i/2,p+i) && i/2 > 0)
	{
		swap(p+i,p+i/2);
		i /=2;
	}
}

void build(int *p, int size)
{
	int i = size/2;
	while(i > 0)
	{
		sinker(p,i,size);
		i-=1;
	}
}

void builder(int *p, int size)
{
	for(int i = 1; i <= size; i++)
	{
		swin(p,i);
	}
}

void heap(int *d, int size)
{
	int *p = (int*)malloc(sizeof(int)*(size+1));
	for(int i = 1; i <=size; i++)
	{
		*(p+i) = *(d+i-1);
	}
	int *t = d;

	build(p,size);
//	builder(p,size);
	while(size >= 1)
	{
		sinker(p,1,size);
		swap(p+1,p+size);
		*(t++) = *(p+size);
		size--;
	}
	//don't forget to do this !
	free(p);
}
	


