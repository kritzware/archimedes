#include <string>

typedef int TokenType;

struct Token
{
  TokenType type;
  char literal;
};

const int TOK_ILLEGAL = -1;
const int TOK_EOF = -2;

const int TOK_IDENT = -3;
const int TOK_INT = -4;

const int TOK_ASSIGN = -5;
const int TOK_PLUS = -6;

const int TOK_COMMA = -7;
const int TOK_SEMICOLON = -8;

const int TOK_FUNCTION = -9;
const int TOK_LET = -10;