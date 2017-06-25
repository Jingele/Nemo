#ifndef __MERGE_H__
#define __MERGE_H__

#include "util.h"

void join(int *d,int low, int mid, int high);

void join_step(int *d, int step, int size);

extern void merge(int *d, int size);

extern void merger(int *d, int size);

#endif

