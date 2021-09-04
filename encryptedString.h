//
// Created by Tom Shields on 8/31/21.
//

#ifndef UNTITLED_ENCRYPTEDSTRING_H
#define UNTITLED_ENCRYPTEDSTRING_H

#include <string>
using namespace std;


class encryptedString {

public:
    encryptedString();
    encryptedString( string str );
    void set( string str );
    string get() const;
    string getEncrypted() const;
private:
    string encryptStr;


};


#endif //UNTITLED_ENCRYPTEDSTRING_H
