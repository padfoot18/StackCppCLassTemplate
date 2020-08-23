#pragma once
#include <stdexcept>
#include <string>

/*!
  \file stackerror.h
  \brief Contains implementation of StackError base exception class.
*/

/*!
  \class StackError
  \brief Base class for all Stack related exceptions.
*/
class StackError: public std::runtime_error {
public:
	/*!
	  \brief Constructor
	  \param msg Error message
	*/
	StackError(const char* msg="StackError"): runtime_error(msg), msg(msg) {}

	/*!
	  \brief Overridden what() method from std::runtime_error.
	  \return Error message as const char*.
	*/
	const char* what() const noexcept {
		return msg.c_str();
	}
protected:
	std::string msg;			/*!< Error message */
};

#include "stackoverflowerror.h"
#include "stackunderflowerror.h"
