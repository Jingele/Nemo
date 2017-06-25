#ifndef __HEAP_H__
#define __HEAP_H__


void build(int *d, int size);//sink

void builder(int *d, int size);//swim

void sink(int *d, int i, int size);

void sinker(int *d, int i, int size);

void swin(int *d,int i);

extern void heap(int *d, int size);


#endif
