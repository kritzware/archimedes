#include <string>

typedef std::string TokenType;

struct Token
{
  TokenType type;
  char literal;
};

const std::string TOK_ILLEGAL = "TOK_ILLEGAL";
const std::string TOK_EOF = "TOK_EOF";

const std::string TOK_IDENT = "TOK_IDENT";
const std::string TOK_INT = "TOK_INT";

const std::string TOK_ASSIGN = "TOK_ASSIGN";
const std::string TOK_PLUS = "TOK_PLUS";

const std::string TOK_COMMA = "TOK_COMMA";
const std::string TOK_SEMICOLON = "TOK_SEMICOLON";

const std::string TOK_FUNCTION = "TOK_FUNCTION";
const std::string TOK_LET = "TOK_LET";