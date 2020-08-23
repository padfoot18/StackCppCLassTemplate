#pragma once

/*!
  \file stackunderflowerror.h
  \brief Contains implementation of the StackUnderflowError class.
*/

/*!
  \class StackUnderflowError
  \brief Exception class for Stack underflow runtime error.
*/
class StackUnderflowError: public StackError {
public:
	/*!
	  \brief Constructor
	  \param msg Error message
	*/
	StackUnderflowError(const char* msg="StackUnderflowError"): StackError(msg) {}
};