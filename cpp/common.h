#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream>

using namespace std;



template <class T>
struct Node{
	T data;
	struct Node<T>* next;
};

/*********************************
 *
 */


#endif
