#include "Message.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

int main(){

Message M;

std::string ciph = M.ShiftCipher("This is a test", 3);
std::cout<<"Shift Cipher: "<<ciph<<std::endl;
std::cout<<"Shift Decipher: "<<M.ShiftDecipher(ciph, 3)<<std::endl;

ciph = M.CaesarCipher("This is a bigger, greater, great, test.");
std::cout<<"Caesar Cipher: "<<ciph<<std::endl;
std::cout<<"Caesar Decipher: "<<M.CaesarDecipher(ciph)<<std::endl;

ciph = M.AtbashCipher("A test, consists      of random words and precomps.");
std::cout<<"Atbash Cipher: "<<ciph<<std::endl;
std::cout<<"Atbash Decipher: "<<M.AtbashDecipher(ciph)<<std::endl;

ciph = M.ReverseTransCipher("This is a bigger, greater, great, test.");
std::cout<<"Reverse Trans Cipher: "<<ciph<<std::endl;
std::cout<<"Reverse Trans Decipher: "<<M.ReverseTransDecipher(ciph)<<std::endl;

ciph = M.AffineCipher("This is a bigger, greater, great, test.", 5, 8);
std::cout<<"Affine Cipher: "<<ciph<<std::endl;
std::cout<<"Affine Decipher: "<<M.AffineDecipher(ciph, 5, 8)<<std::endl;

return 0;
}
