//
// Created by Tom Shields on 8/31/21.
//

#include "encryptedString.h"
#include <math.h>
using namespace std;

encryptedString::encryptedString()
{
    encryptStr = "";
}

encryptedString::encryptedString (string str)
{
    set(str);
}

void encryptedString::set( string str )
{

    int l = str.length();
    int b = ceil(sqrt(l));
    int a = floor(sqrt(l));

    if (b * a < l)
    {
        if (min(b, a) == b) {
            b = b + 1;
        } else {
            a = a + 1;
        }
    }

    char arr[a][b];
    memset(arr, ' ', sizeof(arr));
    int k = 0;

    for (int j = 0; j < a; j++) {
        for (int i = 0; i < b; i++) {
            if (k < l) {
                arr[j][i] = str[k];
            }
            k++;
        }
    }

    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            encryptStr = encryptStr + arr[i][j];
        }
    }

}
    string encryptedString::get() const
    {
        string d = encryptStr;
        int l = d.length();
        int b = ceil(sqrt(l));
        int a = floor(sqrt(l));
        string decrypted;
        char arr[a][b];
        memset(arr, ' ', sizeof(arr));
        int k = 0;

        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                if (k < l) {
                    arr[j][i] = d[k];
                }
                k++;
            }
        }

        for (int j = 0; j < a; j++)
        {
            for (int i = 0; i < b; i++)
            {
                decrypted = decrypted + arr[i][j];
            }
        }
        return decrypted;
    }

string encryptedString::getEncrypted() const
{
    return encryptStr;
}


