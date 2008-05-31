//
// Number.cpp for **AbstractVm** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
// 
// Made by majdi toumi
// Login   <toumi_m@epitech.net>
// 
// Started on  Sat May 31 14:40:50 2008 majdi toumi
// Last update Sat May 31 15:35:45 2008 majdi toumi
//

#include <string>
#include "Number.h"

Number::Number()
{
}

Number::Number(const Number& nbr) : IOperand()
{
  *this = nbr;
}

Number::~Number()
{
}

Number&		Number::operator=(const Number& right)
{
  if (this != &right)
    ;
  return (*this);
}

