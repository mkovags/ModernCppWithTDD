#ifndef SOUNDEX_SOUNDEXTEST_H
#define SOUNDEX_SOUNDEXTEST_H

#include <string>

class Soundex
{
public:
    std::string encode(const std::string & word) const;
    std::string encodedDigit(char letter) const;

private:
    static const size_t MaxCodeLength {4};
    std::string zeroPad(const std::string &word) const;
    std::string head(const std::string &word) const;
    std::string encodedDigits(const std::string &word) const;
    void encodeHead(std::string &encoding, const std::string &word) const;
    void encodeTail(std::string &encoding, const std::string &word) const;
    void encodeLetter(std::string &encoding, char letter, char lastLetter) const;
    std::string tail(const std::string &word) const;
    bool isComplete(const std::string &encoding) const;
    std::string lastDigit(const std::string &encoding) const;
    std::string upperFront(const std::string &string) const;
    char lower(char c) const;
    bool isVowel(char c) const;
    const std::string NotADigit{"*"};
};

#endif //SOUNDEX_SOUNDEXTEST_H
