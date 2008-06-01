//
// main.cpp for test in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:46:28 2008 caner candan
// Last update Sun Jun  1 14:22:34 2008 caner candan
//

#include <string>
#include <iostream>
#include "VM.h"
#include "IOperand.h"
#include "Factory.h"
#include "Number.h"

int		main(int ac, char **av)
{
  VM		vm;
  int		i;

  if (ac < 2)
    return (-1);
  for (i = 1; i < ac; i++)
    {
      std::cout << std::endl
		<< "-------------------------------"
		<< std::endl << "[FILE] "
		<< av[i] << std::endl
		<< "-------------------------------"
		<< std::endl;
      vm.FileToStack(std::string(av[i]));
      vm.FileStackToVMStack();
      vm.clearStack();
    }
  return (0);
}
