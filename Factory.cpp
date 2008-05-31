//
// Factory.cpp for Factory in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:25:37 2008 caner candan
// Last update Sat May 31 17:39:33 2008 caner candan
//

#include <string>
#include <sstream>
#include <iostream>
#include "Factory.h"
#include "Number.h"

/*
  std::string		type(s.substr(0, s.find_first_of('(')));
  std::istringstream	value(s.substr(s.find_first_of('(') + 1,
				       s.length() - s.find_first_of(')') + 1));

  if (type == "int16")
    {
      short int	nbr;
      value >> nbr;
      return (new Number<T>(type, nbr));
    }
 */

template <typename T>
Number<T>	*Factory<T>::makeNumber(T value)
{
  return (new Number<T>(value));
}

template class Factory<short int>;
template class Factory<long int>;
template class Factory<float>;
template class Factory<double>;
