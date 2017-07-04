#include "common.h"

template<class T>
class minPQ{//minimun priority queue
private:
	T* heap;
	int sz;//[1,2,3...sz]
	int capacity;
public:
	minPQ();
	minPQ(T *d,int sz);
	T delMin();
	int add(T e);
	T getMin();
	void buildHeap();
	void swin(int k);
	void sink(int k);
	int size();
};
