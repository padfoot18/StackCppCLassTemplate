#pragma once

/*!
  \file stackoverflowerror.h
  \brief Contains implementation of the StackOverflowError class.
*/

/*!
  \class StackOverflowError
  \brief Exception class for Stack overflow runtime error.
*/
class StackOverflowError: public StackError {
public:
	/*!
	  \brief Constructor
	  \param msg Error message
	*/
	StackOverflowError(const char* msg="StackOverflowError"): StackError(msg) {}
};