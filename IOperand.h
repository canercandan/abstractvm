//
// IOperand.h for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 11:57:59 2008 majdi toumi
// Last update Sat May 31 12:11:44 2008 majdi toumi
//

#ifndef __IOPERAND_H__
# define __IOPERAND_H__

#include "IObject.h"

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

#endif /* !__IOPERAND_H__*/
