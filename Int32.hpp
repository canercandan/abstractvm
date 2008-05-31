//
// Int32.hpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:53:58 2008 majdi toumi
// Last update Sat May 31 09:20:24 2008 majdi toumi
//

#ifndef __INT32_HPP__
# define __INT32_HPP__

#include "IOperand.hpp"

/*
** ~ Class:
*/
class			Int32 : public IOperand
{
public:
  Int32();
  virtual ~Int32();
  Int32(const long int& i);
  Int32(const Int32& i);

  Int32&		operator=(const Int32& i);

private:
  long int		_val;
};

#endif /* !__INT32_HPP__ */
