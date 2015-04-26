#ifndef MESSAGE_H_INCLUDED
#define MESSAGE_H_INCLUDED
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

struct node{

    char x;
    int n;
    int o;
};

class Message
{
    public:
        Message();
        ~Message();
        // This function performs a shift Cipher on the input string. An input string is required,
        // as well as an integer to determine how much to shift the alphabet by. The integer must
        // be between 0 and 26.
        std::string ShiftCipher(std::string, int);
        // This function performs a shift Decipher on the input string.An input string is required,
        // as well as an integer to determine how much to shift the alphabet by. The integer must
        // be between 0 and 26;
        std::string ShiftDecipher(std::string, int);
        // This function performs an Atbash Cipher on the input string. Only an input string is required.
        // The Alphabet is mapped to its inverse, so A->Z, B->Y, etc.
        std::string AtbashCipher(std::string);
        // This function performs a Atbash Decipher on the input string.Only an input string is required.
        // The Alphabet is mapped from its inverse to its original, so A->Z, B->Y, etc.
        std::string AtbashDecipher(std::string);
        // This function performs a Cipher to reverse transpose an input string."this is a test" becomes
        // "tset a si siht".
        std::string ReverseTransCipher(std::string);
        // This function performs a Decipher to reverse transpose an input string."tset a si siht" becomes
        // "this is a test".
        std::string ReverseTransDecipher(std::string);
        // This function performs an Affine Cipher the input string. An input string is required, as well as two
        // integers that help determine a function that maps any letter to another letter in the alphabet.
        std::string AffineCipher(std::string, int, int);
        // This function performs an Affine Decipher the input string. An input string is required, as well as two
        // integers that help determine a function that maps any letter back to its original state.
        std::string AffineDecipher(std::string, int, int);

    protected:
    private:
};

#endif // MESSAGE_H_INCLUDED
