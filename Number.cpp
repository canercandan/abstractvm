//
// Number.cpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 16:12:59 2008 majdi toumi
// Last update Sat May 31 16:26:39 2008 caner candan
//

#include <iostream>
#include <sstream>
#include <string>
#include "Number.h"

template<typename T>
Number<T>::Number(const std::string& t, const T& v) :  _type(t), _value(v)
{
}

template<typename T>
Number<T>::Number(const Number& nbr) : IOperand()
{
  *this = nbr;
}

template<typename T>
Number<T>::~Number()
{
}

template<typename T>
Number<T>&		Number<T>::operator=(const Number& right)
{
  if (this != &right)
    {
      this->_type = right._type;
      this->_value = right._value;
    }
  return (*this);
}

template<typename T>
std::string	Number<T>::ToString() const
{
  std::ostringstream	oss;

  oss << this->_value;
  return(oss.str());
}

template<typename T>
std::string	Number<T>::GetType() const
{
  return (this->_type);
}

template<typename T>
bool		Number<T>::Equals(const IObject &object) const
{
  //  return (this->_value == ._value ? true : false);
  return (true);
}

template<typename T>
IObject*	Number<T>::Clone() const
{
  return (0);
}

template<typename T>
IObject*	Number<T>::Add(const IOperand& object) const
{
  (void)object;
  return (0);
}

template<typename T>
IObject*	Number<T>::Substract(const IOperand& object) const
{
  (void)object;
  return (0);
}

template<typename T>
IObject*	Number<T>::Multiply(const IOperand& object) const
{
  (void)object;
  return (0);
}

template<typename T>
IObject*	Number<T>::Divide(const IOperand& object) const
{
  (void)object;
  return (0);
}

template class	Number<short int>;
template class	Number<long int>;
template class	Number<float>;
template class	Number<double>;
