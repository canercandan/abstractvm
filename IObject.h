//
// IObject.h for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 11:57:31 2008 majdi toumi
// Last update Sat May 31 21:47:34 2008 majdi toumi
//

#ifndef __IOBJECT_H__
# define __IOBJECT_H__

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

#endif /* !__IOBJECT_H__ */
