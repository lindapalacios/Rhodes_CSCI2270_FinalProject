#include "Message.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>

using namespace std;

Message::Message(){

}

Message::~Message(){

}

// This function performs a shift Cipher on the input string. An input string is required,
// as well as an integer to determine how much to shift the alphabet by. The integer must
// be between 0 and 26.
string Message::ShiftCipher(string input, int key){
    vector<char> inputChars;

    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            char temp;
            if(tolower(input[i] != 'z'))
                temp = static_cast<char>(tolower(input[i]) + key);
            else    temp = static_cast<char>('a' + (key-1));
            inputChars.push_back(temp);
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.begin(),inputChars.end());
    return output;
}

// This function performs a shift Decipher on the input string.An input string is required,
// as well as an integer to determine how much to shift the alphabet by. The integer must
// be between 0 and 26;
string Message::ShiftDecipher(string input, int key){
    vector<char> inputChars;

    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            char temp;
            if(tolower(input[i] != 'a'))
                temp = static_cast<char>(tolower(input[i]) - key);
            else    temp = static_cast<char>('z' - (key-1));
            inputChars.push_back(temp);
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.begin(),inputChars.end());
    return output;
}

// This function performs a Cipher to reverse transpose an input string."this is a test" becomes
// "tset a si siht".
string Message::ReverseTransCipher(string input){
    vector<char> inputChars;

    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            char temp = static_cast<char>(tolower(input[i]));
            inputChars.push_back(temp);
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.end(),inputChars.begin());
    return output;
}

// This function performs a Decipher to reverse transpose an input string."tset a si siht" becomes
// "this is a test".
string Message::ReverseTransDecipher(string input){
    vector<char> inputChars;

    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            char temp = static_cast<char>(tolower(input[i]));
            inputChars.push_back(temp);
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.end(),inputChars.begin());
    return output;
}

// This function performs an Atbash Cipher on the input string. Only an input string is required.
// The Alphabet is mapped to its inverse, so A->Z, B->Y, etc.
string Message::AtbashCipher(string input){
    vector<char> inputChars;
    vector<node*> vNode;
    int a = 25;
    int b = 25;

    for (int i = 0; i < 27; i++){
        node* newN = new node;
        newN->n = i;
        newN->x = static_cast<char>(tolower('a' + i));
        newN->o = ((a*i + b)%26);
        vNode.push_back(newN);
    }
    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            for(int j = 0; j < vNode.size(); j++){
                if(tolower(input[i]) == vNode[j]->x){
                    for(int k = 0; k < vNode.size(); k++){
                        if(vNode[k]->n == vNode[j]->o){
                            inputChars.push_back(vNode[k]->x);
                        }
                    }
                }
            }
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.begin(),inputChars.end());
    return output;
}

// This function performs a Atbash Decipher on the input string.Only an input string is required.
// The Alphabet is mapped from its inverse to its original, so A->Z, B->Y, etc.
string Message::AtbashDecipher(string input){
    vector<char> inputChars;
    vector<node*> vNode;
    int a = 25;
    int b = 25;

    for (int i = 0; i < 27; i++){
        node* newN = new node;
        newN->n = i;
        newN->x = static_cast<char>(tolower('a' + i));
        newN->o = ((a*i + b)%26);
        vNode.push_back(newN);
    }
    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            for(int j = 0; j < vNode.size(); j++){
                if(tolower(input[i]) == vNode[j]->x){
                    for(int k = 0; k < vNode.size(); k++){
                        if(vNode[k]->n == vNode[j]->o){
                            inputChars.push_back(vNode[k]->x);
                        }
                    }
                }
            }
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.begin(),inputChars.end());
    return output;
}

// This function performs an Affine Cipher the input string. An input string is required, as well as two
// integers that help determine a function that maps any letter to another letter in the alphabet.
string Message::AffineCipher(string input, int a, int b){
    vector<char> inputChars;
    vector<node*> vNode;

    for (int i = 0; i < 27; i++){
        node* newN = new node;
        newN->n = i;
        newN->x = static_cast<char>(tolower('a' + i));
        newN->o = ((a*i + b)%26);
        vNode.push_back(newN);
    }
    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            for(int j = 0; j < vNode.size(); j++){
                if(tolower(input[i]) == vNode[j]->x){
                    for(int k = 0; k < vNode.size(); k++){
                        if(vNode[k]->n == vNode[j]->o){
                            inputChars.push_back(vNode[k]->x);
                        }
                    }
                }
            }
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.begin(),inputChars.end());
    return output;
}

// This function performs an Affine Decipher the input string. An input string is required, as well as two
// integers that help determine a function that maps any letter back to its original state.
string Message::AffineDecipher(string input, int a, int b){
    vector<char> inputChars;
    vector<node*> vNode;

    for (int i = 0; i < 27; i++){
        node* newN = new node;
        newN->n = i;
        newN->x = static_cast<char>(tolower('a' + i));
        newN->o = ((a*i + b)%26);
        vNode.push_back(newN);
    }
    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i]) != 0){
            for(int j = 0; j < vNode.size(); j++){
                if(tolower(input[i]) == vNode[j]->x){
                    for(int k = 0; k < vNode.size(); k++){
                        if(vNode[k]->n == vNode[j]->o){
                            inputChars.push_back(vNode[k]->x);
                        }
                    }
                }
            }
        }
        else{
            inputChars.push_back(input[i]);
        }
    }
    string output(inputChars.begin(),inputChars.end());
    return output;
}
