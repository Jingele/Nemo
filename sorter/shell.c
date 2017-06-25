#include "head.h"

void sheller(int *d, int N)
{
	 int h = 1;
	 while( h < N/3)
	 {
		 h = h*3+1;
	 }
	 while(h >= 1)
	 {
		 for(int i = h; i < N; i++)
		 {// insert d[i] to d[i-h] d[i-2h] d[i-3h]....
			for(int j = i; j-h >=0; j-=h)
			{
				if(*(d+j) < *(d+j-h))
				{
					swap(d+j,d+j-h);
				}
			}
		 }
		 h/=3;
	 }
}




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

