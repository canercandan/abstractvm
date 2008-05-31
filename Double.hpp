//
// Double.hpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:53:58 2008 majdi toumi
// Last update Sat May 31 09:23:15 2008 majdi toumi
//

#ifndef __DOUBLE_HPP__
# define __DOUBLE_HPP__

#include "IOperand.hpp"

/*
** ~ Class:
*/
class			Double : public IOperand
{
public:
  Double();
  Double(const double& val);
  Double(const Double& d);
  virtual ~Double();

  Double&		operator=(const Double& d);

private:
  double		_val;
};

#endif /* !__DOUBLE_HPP__ */
