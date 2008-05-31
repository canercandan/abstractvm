//
// VM.cpp for VM in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 15:35:37 2008 caner candan
// Last update Sat May 31 17:37:26 2008 caner candan
//

#include "VM.h"

VM::VM()
{}

VM::VM(const VM& v)
{*this = v;}

VM::~VM()
{}

VM&	VM::operator=(const VM& v)
{
  if (this != &v)
    {}
  return (*this);
}
