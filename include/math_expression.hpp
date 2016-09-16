//
// Created by sagara on 16/09/16.
//

#ifndef MICRO_COMPILER_MATH_EXPRESSION_HPP
#define MICRO_COMPILER_MATH_EXPRESSION_HPP

#include "cradle.hpp"

class MathExpression
{
public:
    MathExpression();
    ~MathExpression();

    static void translate(Cradle &c);
private:
    MathExpression(const MathExpression &me) = delete;
    MathExpression(const MathExpression &&me) = delete;
    MathExpression &operator = (const MathExpression &me) = delete;
    MathExpression &operator = (const MathExpression &&me) = delete;
};

#endif //MICRO_COMPILER_MATH_EXPRESSION_HPP
