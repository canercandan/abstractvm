//
// Int16.h for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 14:36:59 2008 majdi toumi
// Last update Sat May 31 15:24:50 2008 majdi toumi
//

#ifndef __INT16_H__
# define __INT16_H__

#include <string>
#include "IOperand.h"
#include "IObject.h"
#include "Number.h"

/*
** ~ Class:
*/
class		Int16 : public Number
{
  Int16();
  Int16(const short int& val);
  Int16(const Int16& i);
  ~Int16();
  Int16&	operator=(const Int16& right);

  std::string	ToString() const;
  std::string	GetType() const;
  bool		Equals(const IObject &object) const;
  IObject*	Clone() const;

  IObject*	Add(const IOperand& object) const;
  IObject*	Substract(const IOperand& object) const;
  IObject*	Multiply(const IOperand& object) const;
  IObject*	Divide(const IOperand& object) const;

private:
  std::string	_type;
  short int	_value;
};

#endif /* !__INT16_H__ */
