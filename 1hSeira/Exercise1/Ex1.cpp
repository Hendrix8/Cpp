#include "std_lib_facilities.h"

int FastCalculate(int a, int b, int mode) {

    int result = 0;
    
    // using switch to consider each operation the user can choose
    switch (mode) 
    {
    case 1:
        result = a * b;
        break; 

    case 2:
        result = a / b;
        break;

    case 3:
        result = sqrt(a*a + b*b); 
        break;

    case 4: 
        result = pow((float)a, (float)b);
        break;

    case 5:
        result = a % b;
        break;

    }


    return result;
}

int main() {

    string strA = "0";
    string strB = "0";
    string strMode = "0";
    int a = 0;
    int b = 0;
    int mode = 0;
    int result = 0;

    try {
        // asking user to give the first number of the operation
        cout << "Give an integer for a: ";
        cin >> strA;

        //Exception checking if a is an integer 
        for (char c : strA) {
            if (!isdigit(c)) { // checking every char in string and if one is not a digit then throw exception
                throw 101;
            }
        }


        // asking the user to give the second number of the operation 
        cout << "Give an integer for b: ";
        cin >> strB;

        //Exception checking if b is an integer 
        for (char c : strB) {
            if (!isdigit(c)) { // if at least one of the character is not a digit( i.e. in 1234567890) then throws exception
                throw 101;
            }
        }
        

        // asking the user to choose an operation to do with a and b 
        cout << "\nChoose operation by typing one of the numbers bellow: \n1 <- multiplication (a * b)\n2 <- division (a / b)\n3 <- vector norm (sqrt(a^2 + b^2))\n4 <- power (a^b)\n5 <- division residue (a % b)\n";
        cout << "\nMODE = ";
        cin >> strMode;

        // checking if mode is an integer in {1,2,3,4,5}, if it is not then throw exception 
        for (int i = 0; i < strMode.length(); i++ ) {
            if (!(isdigit(strMode[i]) && stoi(strMode) <= 5 && stoi(strMode) >= 1)) {
                // if NOT (what I want to happen) then throw exception
                throw 102; 
            }
        }
        

        // turning a, b, mode into integers
        a = stoi(strA);
        b = stoi(strB);
        mode = stoi(strMode);

        result = FastCalculate(a, b, mode);
        cout << "\nRESULT = " << result << "\n" ;



    }catch(int x) {
        switch (x)
        {
        case 101:
            cout << "ERROR " << x << ": input is not an integer.\n";
            break;
        
        case 102:
            cout << "ERROR " << x << ": MODE input is not valid.\n";
            break;

        // not needed but left it for the sake of being typical 
        default:
            cout << "ERROR: invalid input.\n";
            break;
        }
    }

    return 0;

}