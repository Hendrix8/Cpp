#include "std_lib_facilities.h"

// Creating a function that saves the last number of a vector and removes it at the same time
// if vector is empty it returns 0
double pop_save(vector<double> numbers) {

    // initializing variables
    double num = 0;
    if (numbers.empty()) {
        num = 0;
    }
    else{
        num = numbers.back(); // saving the last element
        numbers.pop_back(); // removing the last element

    }

    return num;
}

double mult(vector<double> numbers) { 
    
    vector<double> num; // for printing 

    double result = numbers.back(); // last element of vector
    numbers.pop_back(); // removing last element from vector 
    
    if (numbers.size() > 0) {
        num.push_back(result);
        result *= mult(numbers);
        
    }
    else {
        result *= 1;
        num.push_back(result);

    }


    return result;
}

double addition(vector<double> numbers) { 
    
    vector<double> num; // for printing 

    double result = numbers.back(); // last element of vector
    numbers.pop_back(); // removing last element from vector 
    
    if (numbers.size() > 0) {
        num.push_back(result);
        result += addition(numbers);
        
    }
    else {
        result += 0;
        num.push_back(result);
    }
    

    return result;
}

double sub(vector<double> numbers) {
    vector<double> num; // for printing 

    double result = numbers.back(); // last element of vector
    numbers.pop_back(); // removing last element from vector 
    
    if (numbers.size() > 0) {
        num.push_back(result);
        result -= addition(numbers);
        
    }
    else {
        result -= 0;
        num.push_back(result);
    }
    

    return result;
}

int main() {

    try {

        // initializing variables 
        int N = 0;
        int mode = 0;
        double inputNumb = 0;
        double result = 0;
        string strN = "0";
        string strNumb = "0";
        string strMode = "0";
        vector<double> numbers;


        // asking user to give a value for the number N
        cout << "Give N : ";
        cin >> strN;
        for (char c : strN) {
            // if the input is only one character and if N is equal to 0
            // then throw error
            if (strN.length() == 1) {
                if (int(c) - 48 == 0) throw 101; // subtracting the ASCII translation
            }

            // if there is anything else than digit in strN then throw error
            // this ensures N is a positive integer since any "." or "-" will be detected as not a digit
            if (!isdigit(c)) throw 101;
        
        }

        //  transforming N to an integer 
        N = stoi(strN);

        // inserting numbers in the vector "numbers"
        for (int i = 0; i < N; i++) {
            
            cout << "Insert the " << i + 1 << " number : ";
            cin >> strNumb;
            
            // checking if the user inserted a negative number
            if (strNumb.at(0) == '-') {
                for (char c : strNumb.substr(1,strNumb.length() - 1)) {
                    if (!isdigit(c)) throw 102;
                }
            }

            // doing the same check if user inserted a positive number
            else {
                for (char c : strNumb) {
                    if (!isdigit(c)) throw 102;
                }
            }

            // converting the number from string to double
            inputNumb = stod(strNumb);
            // inserting the number to the vector "numbers"
            numbers.push_back(inputNumb);
        }

        cout << "---------------------\nAddition -> 1 \nMultiplication -> 2 \nSubtraction -> 3\n--------------------- \nChoose Mode: ";
        cin >> strMode;
        for (char c : strMode) {
            if (!isdigit(c)) throw 103; // if user inserts anything else than a digit for mode throw error
            
            else {
                // if user inserts a digit which is not in {1, 2, 3} then throw error
                if (!((int)c - 48 == 1 || (int)c - 48 == 2 || (int)c - 48 == 3)) throw 103;
            }
        }

        // transforming mode into an integer 
        mode = stoi(strMode);

        // calling the function and printing the result
        if (mode == 1) { 
           result = addition(numbers);
           cout << "Addition : ";
        }
        else if(mode == 2) {
            result = mult(numbers);
            cout << "Multiplication : ";
        }
        else {
            result = sub(numbers);
            cout << "Substraction : ";
        }

        cout << result << endl;
        

    }
    catch(int x) {
        // creating the errors
        switch (x)
        {
        case 101:
            cerr << "Invalid Input. N Must be an integer > 0.\n";
            break;
        
        case 102:
            cerr << "Invalid Input. inputNumb must be double.\n";
            break;
        
        case 103:
            cerr << "Invalid Input. Mode must be 1, 2 or 3.\n";
            break;
        
        default:
            break;
        }
    }

    return 0;
}