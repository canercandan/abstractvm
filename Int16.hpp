//
// Int16.hpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:53:58 2008 majdi toumi
// Last update Sat May 31 10:16:34 2008 majdi toumi
//

#ifndef __INT16_HPP__
# define __INT16_HPP__

#include "IOperand.hpp"

/*
** ~ Class:
*/
class			Int16 : public IOperand
{
public:
  Int16();
  Int16(const int& val);
  Int16(const Int16& i);
  virtual ~Int16();

  Int16&		operator=(const Int16& i);

private:
  int			_val;
};

#endif /* !__INT16_HPP__ */
