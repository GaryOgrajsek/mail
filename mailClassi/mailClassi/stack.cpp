#include "stack.h"
template <class tipo>
stack<tipo>::stack() {
	iTop = -1;
}

template <class tipo>
void stack<tipo>::Push(tipo x) {
	//il nome dello stack è sottointeso.
	iTop++;
	elem[iTop] = x;
}

template <class tipo>
void stack<tipo>::Pop() {
	iTop--;
}

template <class tipo>
tipo stack<tipo>::Top() {
	return elem[iTop];
}

template <class tipo>
bool stack<tipo>::Full() {
	return (iTop == DIM - 1);
}

template <class tipo>
bool stack<tipo>::Empty() {
	return(iTop == -1);
}

template <class tipo>
stack<tipo>::~stack() {}
