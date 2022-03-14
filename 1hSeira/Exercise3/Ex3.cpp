#include "std_lib_facilities.h"

int main() {

    try {
        // initializing variables 
        int magicNum = 0;
        int mode = 0;
        string s = "";
        string result = "";

        // choosing if the string will be encrypted or decrypted 
        cout << "Encrypt -> 1" << endl << "Decrypt -> 2" << endl;
        cout << "Type the corresponding number to the action you want to follow : ";
        cin >> mode;
        if (mode != 1 && mode != 2) {
            throw 109;
        }

        if (mode == 1) {

            // asking user for the string that will be encypted
            cout << "Give the string you want to encrypt : ";
            cin >> s; 

            // throwing error if a character in the string is falling out of the range 32-127
            for (char i : s){
                if ((int)i < 32 || (int)i > 127) {
                    throw 108;
                }
            }
            // asking user to give magic number for encryption
            cout << "Give magic number : ";
            cin >> magicNum;

            // encrypting the string using casting 
            for (char i : s) {
                result += (char)((int)i + magicNum);
            }

            cout << "RESULT = " << result << endl;
        }

        else {
            
            // asking user for the string that will be decrypt
            cout << "Give the string you want to decrypt : ";
            cin >> s; 

            // throwing error if a character in the string is falling out of the range 32-127
            for (char i : s){
                if ((int)i < 32 || (int)i > 127) {
                    throw 108;
                }
            }

            // asking user to give magic number for decryption
            cout << "Give magic number : ";
            cin >> magicNum;

            // decrypting the string using casting 
            for (char i : s) {
                result += (char)((int)i - magicNum);
            }

            cout << "RESULT = " << result << endl;
        }
    }
    catch (int x) {
        switch (x)
        {
        case 108:
            cerr << "Invalid input, characters in string must be from the standard ASCII table (32-127)\n";
            break;
        
        case 109:
            cerr << "Invalide input, You must type 1 for encryption or 2 for decryption.\n";
            break; 

        default:
            break;
        }
    }


    return 0;
}
