#include "std_lib_facilities.h"

int FastCalculate(int a, int b, int mode) {
    int result = 0;
    
    switch (mode)
    {
    case 1:
        result = a*b;
        break; 

    case 2:
        result = a/b;
        break;

    case 3:
        result = sqrt(pow(a, 2) + pow(b, 2));
        break;

    case 4: 
        result = pow(a, b);

    case 5:
        result = a % b;
        break;
    }


    return result;
}

int main() {

    int a = 0;
    int b = 0;
    int mode = 0;
    int result = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "\nChoose operation: \n1 <- multiplication\n2 <- division\n3 <- vector norm\n4 <- power (a^b)\n5 <- division residue\n";
    cout << "\nMODE = ";
    cin >> mode;

    result = FastCalculate(a, b, mode);
    cout << "\nRESULT = " << result << "\n" ;

    return 0;

}

