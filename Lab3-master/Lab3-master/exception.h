#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class myException: public exception
{
  virtual const char* thisException() const throw()
  {
    return "The Stack is Empty!";
  }
};
#endif