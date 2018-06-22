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
  std::string readNumber();
  std::string readIdentifier();
  TokenType lookupIdent(std::string ident);
  void skipWhitespace();
  Token nextToken();
};