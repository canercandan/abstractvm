//
// Int16.cpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:57:11 2008 majdi toumi
// Last update Sat May 31 09:39:22 2008 majdi toumi
//

#include "Int16.hpp"

Int16::Int16() : _val(0)
{
}

Int16::Int16(const int& val) : _val(val)
{
}

Int16::Int16(const Int16& i) : IOperand(i)
{
  *this = i;
}


Int16::~Int16()
{
}

Int16&		Int16::operator=(const Int16& i)
{
  if (this != &i)
    this->_val = i._val;
  return (*this);
}

