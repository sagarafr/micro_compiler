//
// Created by sagara on 16/09/16.
//

#include <iostream>
#include "math_expression.hpp"

MathExpression::MathExpression()
{}

MathExpression::~MathExpression()
{}

void MathExpression::translate(Cradle &c)
{
    std::cout << "MOVE #" << c.getNum() << ",DO" << std::endl;
}