//
// IOperand.hpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:51:21 2008 majdi toumi
// Last update Sat May 31 09:30:49 2008 majdi toumi
//

#ifndef __IOPERAND_HPP__
# define __IOPERAND_HPP__

#include "IObject.hpp"

/*
** ~ Class:
*/
class			IOperand : public IObject
{
public:
  virtual IObject*	Add(const IOperand& object) const = 0;
  virtual IObject*	Substract(const IOperand& object) const = 0;
  virtual IObject*	Multiply(const IOperand& object) const = 0;
  virtual IObject*	Divide(const IOperand& object) const = 0;
};
#endif /* !__IOPERAND_HPP__*/
