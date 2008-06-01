//
// main.cpp for test in /u/epitech_2010s/candan_c/cu/rendu/cpp/AbstractVm
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 31 11:46:28 2008 caner candan
// Last update Sun Jun  1 12:47:05 2008 caner candan
//

#include <string>
#include <iostream>
#include "VM.h"
#include "IOperand.h"
#include "Factory.h"
#include "Number.h"

int		main(void)
{
  Number<int>		nbr1(42);
  Number<long int>	nbr2(42);
  Number<float>		nbr3(42.42);
  Number<double>	nbr4(42.42);
  VM		vm;
  IObject*		val;

  vm.FileToStack(std::string("xdata/test1.s"));
  vm.FileStackToVMStack();

  std::cout << nbr1.GetType() << std::endl;
  std::cout << nbr2.GetType() << std::endl;
  std::cout << nbr3.GetType() << std::endl;
  std::cout << nbr4.GetType() << std::endl;
  std::cout << nbr1.Equals(nbr1) << std::endl;
  std::cout << nbr1.Equals(nbr2) << std::endl;
  std::cout << nbr3.Equals(nbr3) << std::endl;
  std::cout << nbr3.Equals(nbr4) << std::endl;
  std::cout << nbr4.Equals(nbr2) << std::endl;

  val = Factory::makeNumber("int16(-1234)");
  std::cout << val->ToString() << std::endl;
  return (0);
}
