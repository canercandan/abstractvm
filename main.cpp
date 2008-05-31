//
// main.cpp for test in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:46:28 2008 caner candan
// Last update Sat May 31 22:07:49 2008 caner candan
//

#include <string>
#include <iostream>
#include "VM.h"
#include "Number.h"
#include "IOperand.h"
#include "Factory.h"

int	main(void)
{
  IObject	*val;

  val = Factory::makeNumber("int16(-1234)");
  std::cout << val->ToString() << std::endl;
}
