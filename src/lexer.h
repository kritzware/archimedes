#include "token.h"

class Lexer
{
  std::string input;
  int position;
  unsigned int readPosition;
  char ch;

public:
  Lexer(std::string input);
  void readChar();
  Token nextToken();
};