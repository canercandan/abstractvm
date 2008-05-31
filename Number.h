//
// Number.h for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 14:22:02 2008 majdi toumi
// Last update Sat May 31 16:16:57 2008 majdi toumi
//

#ifndef __NUMBER_H__
# define __NUMBER_H__

#include <string>
#include "IObject.h"
#include "IOperand.h"

/*
** ~ Class:
*/
template<typename T>
class		Number : virtual public IOperand
{
public:
  Number(const std::string& type, const T& value);
  Number(const Number& nbr);
  virtual ~Number();
  Number&	operator=(const Number& nbr);

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
  T		_value;
};

#endif /* !__NUMBER_H__ */
