//
// Created by gappa_a on 9/14/16.
//

#include	<iostream>
#include	<stdlib.h>
#include	"cradle.hpp"

Cradle::Cradle(const std::string &filename):file_reading(filename.c_str()), cara(EOF)
{}

Cradle::~Cradle()
{
  if (file_reading.is_open())
    file_reading.close();
}

const char Cradle::getChar()
{
  if (file_reading.is_open())
  {
    if ((cara = static_cast<char>(file_reading.get())) == EOF)
      file_reading.close();
  }
  return cara;
}

void Cradle::match(char c)
{
  if (c == cara)
    getChar();
  else
    expected(std::string("'" + std::string(1, c) + "'"));
}

char Cradle::getName()
{
  if (!(std::isalpha(cara)))
      expected("Name");
  return getCara();
}

char Cradle::getNum()
{
  if (!(std::isdigit(cara)))
    expected("Number");
  return getCara();
}

void Cradle::error(const std::string &str)
{
  std::cerr << "Error " << str << '\n';
}

void Cradle::abort(const std::string &str)
{
  error(str);
  exit(0);
}

void Cradle::expected(const std::string &str)
{
  abort(str + " Expected");
}
