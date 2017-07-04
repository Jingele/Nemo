#include "stack.cpp"
#include "queue.cpp"
#include "minPQ.cpp"

int main(void)
{
	queue<int> s;
	for(int i = 0; i < 10; i++)
	{
		s.enqueue(i);
		cout<<i<<"\t";
	}
	for(int j =0 ; j< 10; j++)
	{
		s.dequeue();
	}
	cout<<s.dequeue()<<endl;
	s.display();
	
	cout<<"min pq"<<endl;
	int a[] = {9,8,7,6,5,4,3,2,1};
	minPQ<int> p;

	for(int j = 9; j>0; j--)
	{
		p.add(j);
	}
	for(int i = 0; i < 9; i++)
	{
		cout<<p.delMin()<<"\t";
	}
	return 0;
}
