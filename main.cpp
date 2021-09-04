//Tom Shields
//Assignment 1
//EncryptionString class
//COSC 2436
//Date: 9/3/21


#include "encryptedString.h"
#include <iostream>
using namespace std;

int main() {
    encryptedString theSample;
    string str = "encryption string";
    theSample.set(str);
    string encrypted;
    string decrypted;

    cout << "encrypted String: " << encrypted << endl;
    encrypted = theSample.getEncrypted();
    cout << encrypted << endl;


    decrypted = theSample.get();
    cout << decrypted;
    return 0;
}
