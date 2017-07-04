#include "common.h"

template <class T>
class stack{
private:
	Node<T> *tp;
	int sz;
public:
	stack();
	stack(const stack& st);
	bool isEmpty();
	T top();
	T pop();
	void push(T data);
	int size();
	void display();
	~stack();
};

