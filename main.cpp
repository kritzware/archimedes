#include "src/lexer.h"

#include <iostream>

using namespace std;

bool testLexer(string input, TokenType tokens[])
{
  cout << "source length: " << input.length() << endl;
  Lexer lexer(input);
  int counter = 0;

  while (1)
  {
    Token token = lexer.nextToken();
    // cout << "token: " << token.type;
    // cout << ", ch: " << token.literal << endl;

    TokenType expected_token = tokens[counter];
    if (token.type != expected_token)
    {
      cout << "expected: " << expected_token << ", actual: " << token.type << endl;
      return false;
    }

    counter++;

    if (token.type == TOK_EOF)
    {
      // cout << "end of file, stopping" << endl;
      break;
    }

    if (token.type == TOK_ILLEGAL)
    {
      cout << "illegal token -> '" << token.literal << "', halting" << endl;
      break;
    }
  }

  return true;
}

int main(int argc, char const *argv[])
{

  string test1_input = "= +- ,;;";
  TokenType test1_tokens[] = {
      TOK_ASSIGN,
      TOK_PLUS,
      TOK_MINUS,
      TOK_COMMA,
      TOK_SEMICOLON,
      TOK_SEMICOLON,
      TOK_EOF};

  bool test1_status = testLexer(test1_input, test1_tokens);
  cout << "test 1: " << test1_status << endl;

  return 0;
}