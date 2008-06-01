//
// main.cpp for test in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:46:28 2008 caner candan
// Last update Sun Jun  1 10:23:04 2008 caner candan
//

#include <string>
#include <iostream>
#include "VM.h"
#include "Factory.h"

int		main(void)
{
  IObject	*val;
  VM		vm;

  vm.fileToStack(std::string("xdata/test1.s"));
  vm.dumpFileStack();
  val = Factory::makeNumber("int16(-1234)");
  std::cout << val->ToString() << std::endl;
  return (0);
}
