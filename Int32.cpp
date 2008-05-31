//
// Int32.cpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:57:11 2008 majdi toumi
// Last update Sat May 31 09:22:30 2008 majdi toumi
//

#include "Int32.hpp"

Int32::Int32() : _val(0)
{
}

Int32::Int32(const long int& val) : _val(val)
{
}

Int32::Int32(const Int32& i) : IOperand(i)
{
  *this = i;
}

Int32::~Int32()
{
}

Int32&		Int32::operator=(const Int32& i)
{
  if (this != &i)
    this->_val = i._val;
  return (*this);
}
