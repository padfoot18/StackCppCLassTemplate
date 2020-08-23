#pragma once

/*!
  \file stack.h
  \brief Include file for Stack class template.
*/

/*! 
  \class Stack
  \brief Class template for stack data type.
  
  Class template for stack data type which can accept any type of data. Size of the stack is fixed once set in the constructor.
*/
template <typename T>
class Stack {
	T* arr;				/*!< pointer to the <T> array which will contain stack elements. */
	size_t s_size;		/*!< size of the <T>array which will contain the stack elements. */
	size_t top;			/*!< index of the element at the top of the stack. */

public:
	/*! 
	  \brief Constructor
	  
	  Creates a stack of size s. The stack size is fixed after constructing!
	  \param s size_t parameter for setting the size of the stack, it takes default value of 10.
	*/
	Stack (size_t s=10);

	/*!
	  \brief Destructor

	  It deletes the array and resets member variables to default values.
	*/
	~Stack ();

	/*!
	  \brief Member function to push data into the stack.

	  Throws StackOverflowError exception if run on a full stack.  
	  \param value The data which is to be added to the stack.
	*/
	void push (T value);

	/*!
	  \brief Member function which removes and returns element at the top of the stack.
	  
	  Throws StackUnderflowError exception if run on an empty stack. 
	  \return Removes and returns element at top of stack by value.
	*/
	T pop ();

	/*!
	  \brief Member function which returns element at top of the stack.
	  
	  Throws StackUnderflowError exception if run on an empty stack.
	  \return The element at the top of the stack by value, does not remove.
	*/
	T stacktop ();

	/*!
	  \brief Member function for checking if stack is empty.
	  
	  \return true if stack is empty, else returns false.
	*/
	bool isEmpty ();

	/*!
	  \brief Member function for displaying the stack.

	  Displays the stack vertically, i.e., from the stack top to the bottom, one below the another.
	*/
	void display ();
};

#include "stack_impl.h"