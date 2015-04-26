#include "Message.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>


std::string CaesarCipher(std::string input){
    Message M;
    return M.ShiftCipher(input, 3);
}

std::string ShiftCipher(std::string input, int shift){
    Message M;
    return M.ShiftCipher(input, shift);
}

std::string AtbashCipher(std::string input){
    Message M;
    return M.AtbashCipher(input);
}

std::string ReverseTransCipher(std::string input){
    Message M;
    return M.ReverseTransCipher(input);
}

std::string AffineCipher(std::string input, int a, int b){
    Message M;
    return M.AffineCipher(input, a, b);
}

std::string CaesarDecipher(std::string input){
    Message M;
    return M.ShiftDecipher(input, 3);
}

std::string ShiftDecipher(std::string input, int shift){
    Message M;
    return M.ShiftDecipher(input, shift);
}

std::string AtbashDecipher(std::string input){
    Message M;
    return M.AtbashDecipher(input);
}

std::string ReverseTransDecipher(std::string input){
    Message M;
    return M.ReverseTransDecipher(input);
}

std::string AffineDecipher(std::string input, int a, int b){
    Message M;
    return M.AffineDecipher(input, a, b);
}

std::string ListCiphers(){
    return "CaesarCipher(string input), ShiftCipher(string input, int shift), ReverseTransCipher(string input), AtbashCipher(string input), AffineCipher(string input, int a, int b).";
}

std::string ListDeciphers(){
    return "CaesarDecipher(string input), ShiftDecipher(string input, int shift), ReverseTransDecipher(string input), AtbashDecipher(string input), AffineDecipher(string input, int a, int b).";
}
