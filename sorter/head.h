#ifndef __HEAD_H__
#define __HEAD_H__

#include "util.h"

typedef struct sort{
	int *data;
	void (*sorter)(int *d, int size);
}sort;

void bubble(int *d, int size);

void selector(int *d, int size);

void insert(int *d, int size);

void shell(int *d, int size);
void sheller(int *d, int size);

void merge(int *d, int size);
void merger(int *d, int size);

void heap(int *d, int size);

#endif
