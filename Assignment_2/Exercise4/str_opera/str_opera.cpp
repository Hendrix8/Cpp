#include "str_opera.h"

namespace StrOp 
{
    // methods 
    string MyString::concaten(string a, string b) {

        vector<char> chars; 
        string result = "";

        for (char i : a) {
            chars.push_back(i);
        }

        for (char i : b) {
            chars.push_back(i);
        }

        for (char i : chars) {
            result += i;
        }
        result += "\n";
        return result;


    }

    string MyString::compare(string a, string b) {

        string result = "";

        if (a > b) {
            result = a + " > " + b;
        }
        else if (a < b) {
            result = a + " < " + b;
        }
        else {
            result = a + " = " + b;

        }
        result += "\n";
        return result;
    }

    string MyString::toUpp(string a) {
        
        string result = "";

        for (char i : a) {
            if (islower(i)) {
                i -= 32;
                result += i;
            }
            else {
                result += i;
            }
        }

        return result + "\n";
    }


    string MyString::toLow(string a) {
        
        string result = "";

        for (char i : a) {
            if (isupper(i)) {
                i += 32;
                result += i;
            }
            else {
                result += i;
            }
        }

        return result + "\n";
    }

}
