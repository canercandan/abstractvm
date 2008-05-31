//
// Double.cpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:57:11 2008 majdi toumi
// Last update Sat May 31 09:23:32 2008 majdi toumi
//

#include "Double.hpp"

Double::Double() : _val(0)
{
}

Double::Double(const double& val) : _val(val)
{
}

Double::Double(const Double& f) : IOperand(f)
{
  *this = f;
}

Double::~Double()
{
}

Double&		Double::operator=(const Double& f)
{
  if (this != &f)
    this->_val = f._val;
  return (*this);
}
