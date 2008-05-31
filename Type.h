//
// Type.h for Type in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:57:54 2008 caner candan
// Last update Sat May 31 12:16:01 2008 caner candan
//

#ifndef __TYPE_H__
# define __TYPE_H__

# include "IOperand.h"

template <typename T>
class	Type : public IOperand
{
public:
  Type();
  Type(const Type<T>& t);
  ~Type();
  Type<T>&	operator=(const Type<T>& t);
};

#endif /* !__TYPE_H__ */
