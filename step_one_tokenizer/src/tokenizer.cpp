/**
 * @file tokenizer.cpp
 * 
 * @brief Implementation file for tokenizer class and related types
 */

#include "tokenizer.hpp"
#include <string>
#include <string_view>
#include <unordered_set>

// Allow the use of string_view literals
using namespace std::literals::string_view_literals;

namespace {
    static const std::unordered_set<std::string_view> KEYWORD_TOKENS{
        "if"sv, "else"sv, "while"sv, "for"sv, "return"sv, "function"sv, "var"sv, "const"sv,
        "class"sv, "import"sv, "export"sv
    };

    static const std::unordered_set<std::string_view> OPERATOR_TOKENS{
        "+"sv, "-"sv, "*"sv, "/"sv, "%"sv, "="sv, "=="sv, "!="sv, "<"sv, "<="sv, ">"sv, ">="sv, "&&"sv, "||"sv
    };

    static const std::unordered_set<std::string_view> DELIMITER_TOKENS{
        ";"sv, ","sv, "."sv, "("sv, ")"sv, "{"sv, "}"sv, "["sv, "]"sv
    };
}

namespace imperium_lang {

    /**
     * @brief Constructor
     * 
     * @param[in] sourceFile The source file to tokenize
     */
    Tokenizer::Tokenizer(const std::string& sourceFile) : sourceFile(sourceFile) {}

    /**
     * @brief Tokenize the source file
     * 
     * @param[out] tokens The tokens extracted from the source file
     * @return Status code
     * @retval 0 Success
     * @retval -1 Parse Error
     * @retval -2 Read Error
     */
    int Tokenizer::tokenize(std::vector<Token>& tokens) {

        tokens.clear();
        
        /** 
            @todo Implement the tokenization algorithm

            Algorithm:
            1. Open stream to source file
            2. Fill buffer with first chunk of data from source
            3. Enter main parse loop:
                a. Parse tokens from buffer
                b. If buffer is near empty and not done reading, refill buffer
                c. If end of file is reached, finish tokenizing
        */

        /** @todo Open stream to source file */

        /** @todo Initialize buffer with start of source data */

        /** @todo Finish main parse loop */
        bool doneReading = false;
        while (true) {
            /** @todo Parse tokens from start of content */

            /** @todo If buffer near empty and not done reading, refill buffer */

            /** @todo If end of file is reached, finish tokenizing */
            break;
        }

        return 0;
    }

    /**
     * @brief Shifts unprocessed data to the start of the buffer, then refills
     *        the buffer with the next data from the source file.
     * 
     * @param[in, out] unprocessed View of unprocessed data
     * @param[out] bytesRead Number of bytes read
     * @return Status code
     * @retval 0 Success
     * @retval 1 End of file reached
     * @retval -1 Read Error
     */
    int Tokenizer::refillBuffer(std::string_view& unprocessed, int& bytesRead) {

        /** @todo Move all unprocessed data to start of buffer */

        /** @todo Read new data into buffer */

        /** @todo Reassign unprocessed to cover all content in buffer */

        return 0;
    }
}