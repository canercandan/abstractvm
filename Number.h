//
// Number.h for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 14:22:02 2008 majdi toumi
// Last update Sat May 31 15:48:04 2008 majdi toumi
//

#ifndef __NUMBER_H__
# define __NUMBER_H__

#include <string>
#include "IObject.h"
#include "IOperand.h"

/*
** ~ Class:
*/
class		Number : virtual public IOperand
{
public:
  Number();
  virtual ~Number();
  Number(const Number& nbr);
  Number&	operator=(const Number& n);

  std::string	ToString() const = 0;
  std::string	GetType() const = 0;
  bool		Equals(const IObject &value) const = 0;
  IObject*	Clone() const = 0;

  IObject*	Add(const IOperand& object) const = 0;
  IObject*	Substract(const IOperand& object) const = 0;
  IObject*	Multiply(const IOperand& object) const = 0;
  IObject*	Divide(const IOperand& object) const = 0;
};

#endif /* !__NUMBER_H__ */
