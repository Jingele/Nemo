#ifndef __stack_CPP__
#define __stack_CPP__

#include "stack.h"

#include "common.h"

template <class T>
stack<T>::stack()
{
//	cout<<"Constructing stack.."<<endl;
	this->tp= NULL;
	this->sz = 0;
}

template <class T>
stack<T>::stack(const stack &st)
{
	this->tp= st.tp;
	this->sz = st.sz;
}

template <class T>
bool stack<T>::isEmpty()
{
	return (tp == NULL);
}


template <class T>
T stack<T>::top()
{
	if(!isEmpty())
	{
		return tp->data;
	}
	else
	{
		return NULL;
	}
}

template <class T>
T stack<T>::pop()
{
	if(!isEmpty())
	{
		Node<T>* t = tp;
		tp = tp->next;
		T r = t->data;
		delete t;
		sz--;
		return r;
	}
	else
	{
		return NULL;
	}
}

template <class T>
void stack<T>::push(T data)
{
	Node<T> *p = new Node<T>;
	p->data = data;
	p->next = tp;
	tp = p;
	sz++;
}

template <class T>
int stack<T>::size()
{
	return sz;
}

template <class T>
stack<T>::~stack()
{
	while(tp != NULL)
	{
		Node<T> *p = tp;
		tp = tp->next;
		delete p;
		sz--;
	}
//	cout<<"destroy the stack finished"<<endl;
}

template <class T>
void stack<T>::display()
{
	Node<T> *p = tp;
	while(p != NULL)
	{
		cout<<p->data<<"\t";
		p = p->next;
	}
	cout<<endl;
}

#endif
