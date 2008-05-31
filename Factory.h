//
// Factory.h for Factory in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:23:22 2008 caner candan
// Last update Sat May 31 17:26:07 2008 caner candan
//

#ifndef __FACTORY_H__
# define __FACTORY_H__

# include <string>
# include "Number.h"

template <typename T>
class	Factory
{
public:
  static Number<T>	*makeNumber(T);
};

#endif /* !__FACTORY_H__ */
