//
// VM.cpp for VM in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 15:35:37 2008 caner candan
// Last update Sun Jun  1 14:04:45 2008 caner candan
//

#include <fstream>
#include <map>
#include <list>
#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>
#include "VM.h"
#include "IObject.h"
#include "IOperand.h"
#include "Factory.h"

VM::myMethod	VM::method[] = {
  {"push", actPush},
  {"pop", actPop},
  {"add", actAdd},
  {"sub", actSub},
  {"mul", actMul},
  {"div", actDiv},
  {"dump", actDump},
  {"assert", actAssert},
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
	  list.push_back(std::string(ptr).substr(0, pos));
	  list.push_back(std::string(ptr).substr(pos + 1, pos2));
 	  this->_fileStack.push_back(list);
	  list.clear();
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
  std::cout << "[push] ";
  while (++it != end)
    {
      stack.push_back(Factory::makeNumber(*it));
      std::cout << stack.back()->ToString()
		<< " ";
    }
  std::cout << std::endl;
}

void	VM::actPop(myListStack::const_iterator&,
		   myListStack::const_iterator&,
		   VMStack& stack)
{
  stack.pop_back();
}

void		VM::actAdd(myListStack::const_iterator&,
			   myListStack::const_iterator&,
			   VMStack& stack)
{
  IOperand	*op1;
  IOperand	*op2;
  IObject	*res;

  op1 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  op2 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  res = op1->Add(*op2);
  stack.push_back(res);
  std::cout << "[add] "
	    << op1->ToString() << " + "
	    << op2->ToString() << " = "
	    << res->ToString() << std::endl;
}

void		VM::actSub(myListStack::const_iterator&,
			   myListStack::const_iterator&,
			   VMStack& stack)
{
  IOperand	*op1;
  IOperand	*op2;
  IObject	*res;

  op1 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  op2 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  res = op1->Substract(*op2);
  stack.push_back(res);
  std::cout << "[sub] "
	    << op1->ToString() << " - "
	    << op2->ToString() << " = "
	    << res->ToString() << std::endl;
}

void		VM::actMul(myListStack::const_iterator&,
			   myListStack::const_iterator&,
			   VMStack& stack)
{
  IOperand	*op1;
  IOperand	*op2;
  IObject	*res;

  op1 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  op2 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  res = op1->Multiply(*op2);
  stack.push_back(res);
  std::cout << "[mul] "
	    << op1->ToString() << " x "
	    << op2->ToString() << " = "
	    << res->ToString() << std::endl;
}

void		VM::actDiv(myListStack::const_iterator&,
			   myListStack::const_iterator&,
			   VMStack& stack)
{
  IOperand	*op1;
  IOperand	*op2;
  IObject	*res;

  op1 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  op2 = static_cast<IOperand*>(stack.back());
  stack.pop_back();
  res = op1->Divide(*op2);
  stack.push_back(res);
  std::cout << "[div] "
	    << op1->ToString() << " - "
	    << op2->ToString() << " = "
	    << res->ToString() << std::endl;
}

void		VM::actDump(myListStack::const_iterator&,
			    myListStack::const_iterator&,
			    VMStack& stack)
{
  size_t	size;

  size = stack.size();
  std::cout << "[dump]" << std::endl
	    << "----------" << std::endl;
  while (size--)
    {
      std::cout << stack[size]->ToString() << " ("
		<< stack[size]->GetType() << ")" << std::endl;
    }
  std::cout << "----------" << std::endl;
}

void		VM::actAssert(myListStack::const_iterator& it,
			      myListStack::const_iterator& end,
			      VMStack& stack)
{
  IObject	*op;

  std::cout << "[assert] ";
  while (++it != end)
    {
      op = Factory::makeNumber(*it);
      try
	{
	  if (op->ToString() != stack.back()->ToString())
	    throw 1;
	  if (op->GetType() != stack.back()->GetType())
	    throw 2;
	}
      catch (int e)
	{
	  std::cout << "The value on top of the stack does "
		    << "not equal the operand." << std::endl;
	  if (e == 1)
	    std::cout << op->ToString() << " <> "
		      << stack.back()->ToString() << std::endl;
	  else if (e == 2)
	    std::cout << op->GetType() << " <> "
		      << stack.back()->GetType() << std::endl;
	  exit(-1);
	}
    }
  std::cout << "Good test" << std::endl;
}
