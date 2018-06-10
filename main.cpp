#include "src/lexer.h"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  string input = "=+,;";
  Lexer lexer(input);

  for (unsigned int i = 0; i < input.length(); i++)
  {
    Token token = lexer.nextToken();

    cout << "token: " << token.type;
    cout << ", ch: " << token.literal << endl;
  }

  return 0;
}
