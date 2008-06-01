//
// VM.h for VM in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:21:58 2008 caner candan
// Last update Sun Jun  1 12:38:30 2008 caner candan
//

#ifndef __VM_H__
# define __VM_H__

# include <string>
# include <stack>
# include <vector>
# include <list>
# include "IObject.h"

class	VM
{
public:
  typedef std::list<std::string>	myListStack;
  typedef std::vector<myListStack>	myFileStack;
  typedef std::stack<IObject*>		VMStack;

  typedef void	(*myFunc)(myListStack::const_iterator&,
			  myListStack::const_iterator&,
			  VMStack&);

  struct	myMethod
  {
    std::string	type;
    myFunc	func;
  };

  static myMethod	method[];

  VM();
  VM(const VM& v);
  ~VM();
  VM&	operator=(const VM& v);

  bool	FileToStack(const std::string& path);
  void	FileStackToVMStack(void);

  static void	actPush(myListStack::const_iterator&,
			myListStack::const_iterator&,
			VMStack&);
private:
  myFileStack	_fileStack;
  VMStack	_vmStack;
};

#endif /* !__VM_H__ */