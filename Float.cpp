//
// Float.cpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:57:11 2008 majdi toumi
// Last update Sat May 31 09:22:52 2008 majdi toumi
//

#include "Float.hpp"

Float::Float() : _val(0)
{
}

Float::Float(const float& val) : _val(val)
{
}

Float::Float(const Float& f) : IOperand(f)
{
  *this = f;
}

Float::~Float()
{
}

Float&		Float::operator=(const Float& f)
{
  if (this != &f)
    this->_val = f._val;
  return (*this);
}
