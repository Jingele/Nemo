#include "head.h"

void main(void)
{
	int a[] = {4,5,6,1,3,2,9,8,0,7,6};
	int s = sizeof(a)/sizeof(int);
	sort sort;
	display(a,s);
	
	sort.data = a;
	sort.sorter = heap;
	sort.sorter(a,s);

	display(a,s);
}
