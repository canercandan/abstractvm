//
// VM.cpp for VM in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 15:35:37 2008 caner candan
// Last update Sun Jun  1 12:43:29 2008 caner candan
//

#include <fstream>
#include <map>
#include <list>
#include <string>
#include <iostream>
#include "VM.h"
#include "IObject.h"
#include "Factory.h"

VM::myMethod	VM::method[] = {
  {"push", actPush},
  {"", 0}
};

VM::VM()
{}

VM::VM(const VM& v)
{*this = v;}

VM::~VM()
{}

VM&	VM::operator=(const VM& v)
{
  if (this != &v)
    {}
  return (*this);
}

bool	VM::FileToStack(const std::string& path)
{
  std::ifstream	ifs;
  char		buf[1024];
  char		*ptr;
  std::size_t	pos;
  std::size_t	pos2;
  std::string	key;
  std::list<std::string>	list;

  ifs.open(path.c_str());
  if (!ifs.is_open())
    return (false);
  while (!ifs.eof())
    {
      buf[0] = 0;
      ptr = &buf[0];
      ifs.getline(buf, sizeof(buf));
      if ((pos = std::string(ptr).find_first_not_of(" \t"))
	  != std::string::npos)
	ptr = &ptr[pos];
      if ((pos = std::string(ptr).find(';')) != std::string::npos)
	ptr[pos] = 0;
      if (std::string(ptr) != "")
	{
	  pos = std::string(ptr).find(' ');
	  pos2 = std::string(ptr).size();
	  std::cout << "[";
	  std::cout << std::string(ptr).substr(0, pos);
	  list.push_back(std::string(ptr).substr(0, pos));
	  list.push_back(std::string(ptr).substr(pos + 1, pos2));
 	  this->_fileStack.push_back(list);
	  list.clear();
	  std::cout << "][";
	  if (pos2 > pos)
	    std::cout << std::string(ptr).substr(pos + 1, pos2);
	  std::cout << "]" << std::endl;
	}
    }
  ifs.close();
  return (true);
}

void		VM::FileStackToVMStack(void)
{
  myListStack::const_iterator	it;
  myListStack::const_iterator	end;
  size_t	i;
  int		j;

  for (i = 0; i < this->_fileStack.size(); i++)
    {
      it = this->_fileStack[i].begin();
      end = this->_fileStack[i].end();
      for (j = 0; method[j].func; j++)
	if (method[j].type == *it)
	  {
	    method[j].func(it, end, this->_vmStack);
	    break;
	  }
    }
}

void	VM::actPush(myListStack::const_iterator& it,
		    myListStack::const_iterator& end,
		    VMStack& stack)
{
  std::cout << "coucouc je push" << std::endl;
  while (++it != end)
    {
      std::cout << "[" << *it << "]";
      stack.push(Factory::makeNumber(*it));
      std::cout << "["
		<< stack.top()->ToString()
		<< "] : ";
    }
}
