//
// Created by gappa_a on 9/14/16.
//

#ifndef MICRO_COMPILER_CRADLE_HPP
#define MICRO_COMPILER_CRADLE_HPP

#include	<fstream>
#include	<string>

class Cradle
{
public:
  Cradle(const std::string &filename);
  ~Cradle();

  const char getChar();
  inline const char getCara() const;

  void match(char c);

  char getName();
  char getNum();

  static void error(const std::string &str);
  static void abort(const std::string &str);
  static void expected(const std::string &str);

private:
  std::ifstream file_reading;
  char cara;

  Cradle(const Cradle &cradle) = delete;
  Cradle(const Cradle &&cradle) = delete;
  Cradle &operator =(const Cradle &cradle) = delete;
  Cradle &operator =(const Cradle &&cradle) = delete;
};

#endif //MICRO_COMPILER_CRADLE_HPP
