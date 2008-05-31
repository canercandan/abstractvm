//
// Int16.cpp for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 14:40:50 2008 majdi toumi
// Last update Sat May 31 15:25:03 2008 majdi toumi
//

#include <iostream>
#include <sstream>
#include <string>
#include "Int16.h"

Int16::Int16(const short int& val) :  _value(val), _type("int16")
{
}

Int16::Int16(const Int16& i)
{
  *this = i;
}

Int16::~Int16()
{
}

Int16&		Int16::operator=(const Int16& right)
{
  if (this != &right)
    {
      this->_type = right._type;
      this->_value = right._value;
    }
  return (*this);
}

std::string	Int16::ToString() const
{
  std::ostringstream	oss;

  oss << this->_value;
  return(oss.str());
}

std::string	Int16::GetType() const
{
  return (this->_type);
}

bool		Int16::Equals(const IObject &object) const
{
  //  return (this->_value == object._value ? true : false);
}

IObject*	Int16::Clone() const
{
}

IObject*	Int16::Add(const IOperand& object) const
{
}

IObject*	Int16::Substract(const IOperand& object) const
{
}

IObject*	Int16::Multiply(const IOperand& object) const
{
}

IObject*	Int16::Divide(const IOperand& object) const
{
}


