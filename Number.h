//
// Number.h for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 14:22:02 2008 majdi toumi
// Last update Sun Jun  1 15:03:37 2008 majdi toumi
//

#ifndef __NUMBER_H__
# define __NUMBER_H__

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include "IObject.h"
#include "IOperand.h"

typedef std::map<std::string, int>	MyMap;
typedef std::vector<std::string>	MyVect;

/*
** ~ Class:
*/
template<typename T>
class			Number : virtual public IOperand
{
public:
  Number(const T& value);
  Number(const Number& nbr);
  virtual ~Number();
  Number&		operator=(const Number& nbr);

  std::string		ToString() const;
  std::string		GetType() const;
  bool			Equals(const IObject& object) const;
  IObject*		Clone() const;

  IObject*		Add(const IOperand& object) const;
  IObject*		Substract(const IOperand& object) const;
  IObject*		Multiply(const IOperand& object) const;
  IObject*		Divide(const IOperand& object) const;

  IObject*		addType(const int& val) const;
  IObject*		addType(const long int& val) const;
  IObject*		addType(const float& val) const;
  IObject*		addType(const double& val) const;
  IObject*		sub_int16(const int& val) const;
  IObject*		sub_int32(const long int& val) const;
  IObject*		sub_float(const float& val) const;
  IObject*		sub_double(const double& val) const;
  IObject*		mult_int16(const int& val) const;
  IObject*		mult_int32(const long int& val) const;
  IObject*		mult_float(const float& val) const;
  IObject*		mult_double(const double& val) const;
  IObject*		div_int16(const int& val) const;
  IObject*		div_int32(const long int& val) const;
  IObject*		div_float(const float& val) const;
  IObject*		div_double(const double& val) const;

  enum
    {
      INT16 = 0,
      INT32,
      FLOAT,
      DOUBLE
    } priority;

private:
  T				_value;
  int				_priority;
  std::string			_type;
  MyMap				_map;
  MyVect			_vect;
};

#endif /* !__NUMBER_H__ */
