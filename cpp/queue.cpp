#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "queue.h"
#include "common.h"


template<class T>
queue<T>::queue()
{
	this->first = NULL;
	this->last = NULL;
	this->sz = 0;
}

template<class T>
queue<T>::queue(const queue& q)
{
	this->first = q.first;
	this->last = q.last;
	this->sz = q.sz;
}

template<class T>
bool queue<T>::isEmpty()
{
	return first==NULL;	
}

template<class T>
T queue<T>::head()
{
	if(!isEmpty())
	{
		return first->data;
	}
	else
	{
		return NULL;
	}
}

template<class T>
T queue<T>::tail()
{
	if(!isEmpty())
	{
		return last->data;
	}
	else
	{
		return NULL;
	}
}

template<class T>
void queue<T>::enqueue(T data)
{
	Node<T>* p = new Node<T>;
	p->data = data;
	p->next = NULL;
	if(last != NULL)
	{
		last->next = p;
		last = p;
	}
	else
	{//empty queue;
		first = last = p;
	}
	sz++;
}

template<class T>
T queue<T>::dequeue()
{
	if(isEmpty())
	{
		return NULL;
	}

	Node<T> *p = first;
	T d = p->data;
	if(first == last)//not empty
	{//only one element;
		first = last = NULL;
	}
	else
	{
		first = first->next;
	}
	sz--;
	delete p;
	return d;
}
	
template<class T>
int queue<T>::size()
{
	return sz;
}

template<class T>
void queue<T>::display()
{
	Node<T> *p = first;
	while(p != NULL)
	{
		cout<<p->data<<"\t";
		p=p->next;
	}
	cout<<endl;
}

template<class T>
queue<T>::~queue()
{
	while(first != NULL)
	{
		Node<T> *p = first;
		first = first->next;
		delete p;
		sz--;
	}
	last = NULL;//deal with the pointer last!
//	cout<<"Destroying queue finished"<<endl;
}

#endif
