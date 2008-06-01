//
// Number.cpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 16:12:59 2008 majdi toumi
// Last update Sun Jun  1 15:14:03 2008 majdi toumi
//

#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include "IObject.h"
#include "IOperand.h"
#include "Number.h"

template class Number<int>;
template class Number<long int>;
template class Number<float>;
template class Number<double>;

template<typename T>
Number<T>::Number(const T& value) : _value(value)
{
  MyMap::iterator itb;
  MyMap::iterator ite;

  _map[typeid(int).name()] = INT16;
  _map[typeid(long int).name()] = INT32;
  _map[typeid(float).name()] = FLOAT;
  _map[typeid(double).name()] = DOUBLE;

  _vect.push_back("Int16");
  _vect.push_back("Int32");
  _vect.push_back("Float");
  _vect.push_back("Double");

  itb = _map.begin();
  ite = _map.end();
  while (itb != ite)
    {
      if ((*itb).first == typeid(value).name())
	{
	  _priority = (*itb).second;
	  _type = _vect[_priority];
	}
      ++itb;
    }
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
    this->_value = right._value;
  return (*this);
}

template<typename T>
std::string		Number<T>::ToString() const
{
  std::ostringstream	oss;

  oss << this->_value;
  return(oss.str());
}

template<typename T>
std::string		Number<T>::GetType() const
{
  return (this->_type);
}

template<typename T>
bool			Number<T>::Equals(const IObject &object) const
{
  std::string		type(object.GetType());

  return (this->_type == type ? true : false);
}

template<typename T>
IObject*		Number<T>::Clone() const
{
  return (new Number<T>(*this));
}

template<typename T>
IObject*		Number<T>::Add(const IOperand& object) const
{
  std::istringstream	iss(object.ToString());
  double		val;

  iss >> val;
  return (addType(this->_value + val));
}

template<typename T>
IObject*		Number<T>::addType(const int& val) const
{
  return (new Number<int>(val));
}

template<typename T>
IObject*		Number<T>::addType(const long int& val) const
{
  return (new Number<long int>(val));
}

template<typename T>
IObject*		Number<T>::addType(const float& val) const
{
  return (new Number<float>(val));
}

template<typename T>
IObject*		Number<T>::addType(const double& val) const
{
  return (new Number<double>(val));
}

template<typename T>
IObject*		Number<T>::Substract(const IOperand& object) const
{
  std::istringstream	iss(object.ToString());
  double		val;

  iss >> val;
  return (subType(this->_value - val));
}

template<typename T>
IObject*		Number<T>::subType(const int& val) const
{
  return (new Number<int>(val));
}

template<typename T>
IObject*		Number<T>::subType(const long int& val) const
{
  return (new Number<long int>(val));
}

template<typename T>
IObject*		Number<T>::subType(const float& val) const
{
  return (new Number<float>(val));
}

template<typename T>
IObject*		Number<T>::subType(const double& val) const
{
  return (new Number<double>(val));
}

template<typename T>
IObject*		Number<T>::Multiply(const IOperand& object) const
{
  std::istringstream	iss(object.ToString());
  double		val;

  iss >> val;
  return (multType(this->_value * val));
}

template<typename T>
IObject*		Number<T>::multType(const int& val) const
{
  return (new Number<int>(val));
}

template<typename T>
IObject*		Number<T>::multType(const long int& val) const
{
  return (new Number<long int>(val));
}

template<typename T>
IObject*		Number<T>::multType(const float& val) const
{
  return (new Number<float>(val));
}

template<typename T>
IObject*		Number<T>::multType(const double& val) const
{
  return (new Number<double>(val));
}

template<typename T>
IObject*		Number<T>::Divide(const IOperand& object) const
{
  std::istringstream	iss(object.ToString());
  double			val;

  iss >> val;
  if (val == 0)
    {
      std::cout << "division per 0" << std::endl;
      exit(-1);
    }
  return (new Number<T>(this->_value / val));
}

template<typename T>
IObject*		Number<T>::divType(const int& val) const
{
  return (new Number<int>(val));
}

template<typename T>
IObject*		Number<T>::divType(const long int& val) const
{
  return (new Number<long int>(val));
}

template<typename T>
IObject*		Number<T>::divType(const float& val) const
{
  return (new Number<float>(val));
}

template<typename T>
IObject*		Number<T>::divType(const double& val) const
{
  return (new Number<double>(val));
}

