#ifndef SRC_TOKENSTREAM_H
#define SRC_TOKENSTREAM_H

#include <string>
#include <vector>
#include "Error.h"

class TokenStream {
public:
    /** The list of tokens created by the lexer */
    std::vector<Token> tokens;

    /** The list of errors generated while lexing */
    std::vector<Error> errors;

    /**
     * Lexes a string into a list of tokens.
     *
     * @param src The source code to lex
     */
    void lex(std::string src);

private:
    /** The current line number of the lexer */
    unsigned int line = 1;

    /** The current column number of the lexer */
    unsigned int column = 1;
};

#endif // SRC_TOKENSTREAM_H
