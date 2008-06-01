//
// VM.h for VM in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 14:21:58 2008 caner candan
// Last update Sun Jun  1 10:28:26 2008 caner candan
//

#ifndef __VM_H__
# define __VM_H__

# include <string>
# include <vector>
# include <list>

class	VM
{
public:
  typedef std::list<std::string>	myListStack;
  typedef std::vector<myListStack>	myFileStack;

  VM();
  VM(const VM& v);
  ~VM();
  VM&	operator=(const VM& v);

  bool	fileToStack(const std::string& path);
  void	dumpFileStack(void);
private:
  myFileStack	_fileStack;
};

#endif /* !__VM_H__ */
