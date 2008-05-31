//
// IObject.hpp for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 08:41:02 2008 majdi toumi
// Last update Sat May 31 08:47:49 2008 majdi toumi
//

#ifndef __IOBJECT_HPP__
# define __IOBJECT_HPP__

#include <string>

/*
** ~ Class:
*/
class			IObject
{
public:
  virtual std::string	ToString() const = 0;
  virtual std::string	GetType() const = 0;
  virtual bool		Equals(const IObject &value) const = 0;
  virtual IObject*	Clone() const = 0;
};

#endif /* !__IOBJECT_HPP__ */
