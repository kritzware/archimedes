#include "src/lexer.h"

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{

  string input = "=+,;";
  Lexer lexer(input);

  for (unsigned int i = 0; i < input.length(); i++)
  {
    Token token = lexer.nextToken();
    printf("token: %d, ch: %c\n", token.type, token.literal);
  }

  return 0;
}
