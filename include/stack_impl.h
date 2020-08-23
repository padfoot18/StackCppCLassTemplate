#pragma once
#include <iostream>
#include "stackerror.h"

using namespace std;

/*!
  \file stack_impl.h
  \brief Contains implementation of the Stack class template.
*/

template <typename T>
Stack<T>::Stack (size_t s): s_size(s) {
	arr = new T[s_size+1];
	top = 0;
}

template <typename T>
Stack<T>::~Stack () {
	s_size = 0;
	top = 0;
	delete[] arr;
	arr = nullptr;
}

template <typename T>
void Stack<T>::push (T value) {
	if (top == s_size)
		throw StackOverflowError("Trying to push into a full stack!");
	arr[++top] = value;
}

template <typename T>
T Stack<T>::pop () {
	if (top == 0)
		throw StackUnderflowError("Trying to pop off an empty stack!");
	return arr[top--];
}

template <typename T>
T Stack<T>::stacktop () {
	if (top == 0)
		throw StackUnderflowError("The stack is empty!");
	return arr[top];
}

template <typename T>
void Stack<T>::display() {
	size_t i;

	if (top == 0) {
		cout << "Stack is empty.\n";
		return;
	}
	for (i=top; i>0; i--)
		cout << arr[i] << "\n";
}
