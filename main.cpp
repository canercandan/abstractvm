//
// main.cpp for test in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:46:28 2008 caner candan
// Last update Sun Jun  1 13:51:08 2008 caner candan
//

#include <string>
#include <iostream>
#include "VM.h"
#include "IOperand.h"
#include "Factory.h"
#include "Number.h"

int		main(void)
{
  VM		vm;

  vm.FileToStack(std::string("xdata/test1.s"));
  vm.FileStackToVMStack();
  return (0);
}
