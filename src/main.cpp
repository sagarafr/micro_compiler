#include	<iostream>
#include	"cradle.hpp"
#include "math_expression.hpp"

int main(int argc, char *argv[])
{
  if (argc != 2)
    return 0;
    std::cout << "Hello, World!" << std::endl;
  std::string s(argv[1]);
  Cradle c(s);
  while (c.getChar() != EOF)
  {
    MathExpression::translate(c);
  }
  return 0;
}
