//
// main.cpp for test in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:46:28 2008 caner candan
// Last update Sat May 31 17:48:37 2008 majdi toumi
//

#include <string>
#include <iostream>
#include "VM.h"
#include "Number.h"
#include "IOperand.h"
#include "Factory.h"

int	main(void)
{
  Number<short int>	*val;

  val = Factory<short int>::makeNumber(1234);
  std::cout << val->_value << std::endl;
}
