#include "common.h"

template <class T>
class queue{
private:
	Node<T> *first;//first ->..->last
	Node<T> *last;
	int sz;
public:
	queue();
	queue(const queue& q);
	~queue();
	bool isEmpty();
	T head();
	T tail();
	void enqueue(T data);
	T dequeue();
	int size();

	void display();
};
