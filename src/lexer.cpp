#include "lexer.h"

Token newToken(TokenType token_type, char ch)
{
  Token tok;
  tok.type = token_type;
  tok.literal = ch;
  return tok;
}

Lexer::Lexer(std::string input_str)
{
  input = input_str;
  readChar();
}

void Lexer::readChar()
{
  if (readPosition >= input.length())
  {
    ch = 0;
  }
  else
  {
    ch = input.at(readPosition);
  }

  position = readPosition;
  readPosition += 1;
}

Token Lexer::nextToken()
{
  Token tok;

  switch (ch)
  {
  case '=':
    tok = newToken(TOK_ASSIGN, ch);
    break;
  case ';':
    tok = newToken(TOK_SEMICOLON, ch);
    break;
  case ',':
    tok = newToken(TOK_COMMA, ch);
    break;
  case '+':
    tok = newToken(TOK_PLUS, ch);
    break;
  case 0:
    tok = newToken(TOK_EOF, 0);
  }

  readChar();
  return tok;
}