//
// Factory.cpp for Factory in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:25:37 2008 caner candan
// Last update Sat May 31 22:06:29 2008 caner candan
//

#include <string>
#include <sstream>
#include <iostream>
#include "Factory.h"
#include "Number.h"
#include "IObject.h"

Factory::myMethod	Factory::method[] = {
  {"int16", Factory::makeInt16},
  {"int32", Factory::makeInt32},
  {"float", Factory::makeFloat},
  {"double", Factory::makeDouble},
  {"", 0}
};

IObject	*Factory::makeInt16(const std::string& s)
{
  short int		val;
  std::istringstream	value(s.substr(s.find_first_of('(') + 1,
				       s.find_first_of(')')));
  value >> val;
  return (new Number<short int>(val));
}

IObject	*Factory::makeInt32(const std::string& s)
{
  long int		val;
  std::istringstream	value(s.substr(s.find_first_of('(') + 1,
				       s.find_first_of(')')));
  value >> val;
  return (new Number<long int>(val));
}

IObject	*Factory::makeFloat(const std::string& s)
{
  float			val;
  std::istringstream	value(s.substr(s.find_first_of('(') + 1,
				       s.find_first_of(')')));
  value >> val;
  return (new Number<float>(val));
}

IObject	*Factory::makeDouble(const std::string& s)
{
  double		val;
  std::istringstream	value(s.substr(s.find_first_of('(') + 1,
				       s.find_first_of(')')));
  value >> val;
  return (new Number<double>(val));
}

IObject	*Factory::makeNumber(const std::string& s)
{
  std::string	type(s.substr(0, s.find_first_of('(')));
  int		i;

  try
    {
      for (i = 0; method[i].func; i++)
	if (method[i].type == type)
	  return (method[i].func(s));
      throw true;
    }
  catch (bool)
    {
      std::cout << "type not found" << std::endl;
      exit(-1);
    }
  return (0);
}
