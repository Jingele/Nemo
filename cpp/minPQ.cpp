#include "minPQ.h"
#include "util.h"


template<class T>
minPQ<T>::minPQ()
{
	sz = 0;
	capacity= 1;
	heap = new T[capacity];
}

template<class T>
minPQ<T>::minPQ(T *d, int sz)
{
	this->sz = sz;//sz element
	this->capacity = 1+sz+sz;//2*sz space
	this->heap = new T[capacity];//heap[0] is empty, start from heap[1]
	for(int i = 0; i < sz; i++)
	{
		*(heap+i+1) = d[i];
	}
	buildHeap();
}

template<class T>
void minPQ<T>::swin(int k)
{
	while(k > 1)
	{
		int t = k/2;
		if(*(heap + k) < *(heap+t))
		{
			swap(heap+k, heap+t);
			k = t;
		}
		else
		{
			break;
		}
	}
}

template <class T>
void minPQ<T>::sink(int k)
{
	while((k+k) <= sz )
	{
		//find k's max child
		int j = k+k;
		if(j+1 <= sz)
		{
			if(*(heap+j) > *(heap+j+1))
			{
				j++;
			}
		}
		if(*(heap+k) > *(heap+j))
		{
			swap(heap+k, heap+j);
			k = j;
		}
		else
		{
			break;
		}
	}
}

template <class T>
void minPQ<T>::buildHeap()
{
	for(int i = sz/2;i>0; i--)
	{
		sink(i);
	}
}

template<class T>
T minPQ<T>::getMin()
{
	if(sz<=0) return NULL;
	else return *(heap+1);
}

template<class T>
int minPQ<T>::add(T e)
{
	if( sz >= capacity-1)// is full;
	{
		capacity = sz+sz+1;
		T *h = new T[capacity];
		for(int i = 1; i <=sz; i++)
		{
			*(h+i) = *(heap+i);
		}
		T *p = heap;
		heap = h;
		if(p!=NULL)
			delete[] p;
	}
	sz++;
	*(heap+sz) = e;
	swin(sz);
}

template<class T>
T minPQ<T>::delMin()
{
	if(sz <= 0)
	{
		return -1;
	}
	T r = *(heap+1);
	*(heap+1) = *(heap+sz);
	sz--;
	sink(1);
	return r;
}


template <class T>
int minPQ<T>::size()
{
	return sz;
}
