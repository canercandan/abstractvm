//
// Factory.h for Factory in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:23:22 2008 caner candan
// Last update Sun Jun  1 11:06:07 2008 caner candan
//

#ifndef __FACTORY_H__
# define __FACTORY_H__

# include <string>
# include "Number.h"
# include "IObject.h"

class	Factory
{
public:
  typedef IObject	*(*myFunc)(const std::string& type);

  struct	myMethod
  {
    std::string	type;
    myFunc	func;
  };

  static myMethod	method[];

  static IObject	*makeInt16(const std::string& s);
  static IObject	*makeInt32(const std::string& s);
  static IObject	*makeFloat(const std::string& s);
  static IObject	*makeDouble(const std::string& s);
  static void		toLowerCase(std::string& s);
  static IObject	*makeNumber(const std::string& s);
};

#endif /* !__FACTORY_H__ */
