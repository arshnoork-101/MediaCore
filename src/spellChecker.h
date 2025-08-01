
#ifndef SENECA_SPELLCHECKER_H
#define SENECA_SPELLCHECKER_H

#include <string>
#include <iostream>
namespace seneca {

class SpellChecker {
    std::string m_badWords[6];            // Array for bad words
    std::string m_goodWords[6];           // Array for the good words
    size_t m_replacementCounts[6]{};      // Count of replacements for each bad word

public:
    // Constructor that initializes the spell checker with word pairs from a file
    SpellChecker(const char* filename);

    // Functor that replaces bad words in a given text
    void operator()(std::string& text);

    // Displays replacement statistics
    void showStatistics(std::ostream& out) const;
};
}

#endif // SENECA_SPELLCHECKER_H
