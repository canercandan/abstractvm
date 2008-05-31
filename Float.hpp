//
// Float.hpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:53:58 2008 majdi toumi
// Last update Sat May 31 09:22:40 2008 majdi toumi
//

#ifndef __FLOAT_HPP__
# define __FLOAT_HPP__

#include "IOperand.hpp"

/*
** ~ Class:
*/
class			Float : public IOperand
{
public:
  Float();
  Float(const float& val);
  Float(const Float& f);
  virtual ~Float();

  Float&		operator=(const Float& f);

private:
  float			_val;
};

#endif /* !__FLOAT_HPP__ */
