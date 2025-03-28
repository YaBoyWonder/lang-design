/**
 * @file step_one.cpp
 * 
 * @brief Driver file to run a demo of the project reflecting the progress made in step one.
 */

#include <iostream>
#include <vector>
#include "tokenizer.hpp"

int main() {

    imperium_lang::Tokenizer tokenizer{"step_one_test.imp"};
    std::vector<imperium_lang::Token> tokens{};
    const auto status = tokenizer.tokenize(tokens);
    if (status != 0) {
        std::cerr << "Error: Tokenization failed.\n";
        return status;
    }

    return 0;
}
