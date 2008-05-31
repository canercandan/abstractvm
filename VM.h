//
// VM.h for VM in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:21:58 2008 caner candan
// Last update Sat May 31 17:37:02 2008 caner candan
//

#ifndef __VM_H__
# define __VM_H__

class	VM
{
public:
  VM();
  VM(const VM& v);
  ~VM();
  VM&	operator=(const VM& v);
};

#endif /* !__VM_H__ */
