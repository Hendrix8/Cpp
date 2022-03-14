#include "std_lib_facilities.h"

// creating function that checks sentences
string checkSentence(string sentence) {

    string result = "WRONG";

    for (int i = 0; i < sentence.length(); i++) {

        if (sentence[0] == '!' || sentence[0] == '?') {

            // if in the beginning there is a ! or a ? then check if the last character matches it
            if (sentence[0] == sentence.back()) {
                result = "CORRECT";
            }
        }
    }

    return result;
}

int main() {

    try {

        // initializing variables 
        int senNum = 0;
        int symbolNum = 0;
        int index = 0;
        int mistakeIndex = 0;
        int caseMistIndex = 0;
        vector<int> symbols; // vector with symbols index
        vector<pair<string, int>> sentVec; // vector with sentences and the index of first ! or ?
        vector<int> lengths; // will contain the lengths of the strings in ? or ! i.e. !blahblah! has length 11
        vector<pair<string, int>> wrongResults; // will contain all the wrong evaluations of the sentences and th index of first ! or ?
        vector<int> upCaseErrors; // contains the indexes of the letters that should be uppercase i.e. This is a semtemce?what is it?, contain the index of w
        string sentAdd = "";
        string result = "";
        string oneSentence = "";
        string manySent = "";
        string subSent = "";
        

        // asking user to input how many sentences will the program check
        cout << "One sentence -> 1" << endl; 
        cout << "Many sentences -> 2" << endl;
        cout << "How Many sentences do you want to check ? : ";
        cin >> senNum;
        if (senNum != 1 && senNum != 2) { throw 111; }

        if (senNum == 1) { 
            // Asking user for the sentence 
            cout << "Give the sentence that you want to check : ";
            cin >> oneSentence;

            // checking the sentence using the function above
            result = checkSentence(oneSentence);
            cout << result << endl;
        }

        else {

            // Asking user for the paragraph 
            cout << "Give the sentences that you want to check : ";
            cin >> manySent;

            // first checking if the number of symbols is even (if not means there is a mistake)
            for (int i = 0; i < manySent.length(); i++) { // this loop counts how many symbols are there in the set of sentences
                if (manySent[i] == '!' || manySent[i] == '?') {
                    symbolNum += 1;
                    index = i;
                }
            }

            if (symbolNum % 2 != 0) { // if the number of symbols is odd
                cout << "WRONG, mistake at index: " << index << endl;
            }
            else { 
                // if the symbols are even, then insert the sentences, that are contained in the symbols, and the 
                // index of the first symbol into a vector and check every sentence using the function checkSentence

                for (int i = 0; i < manySent.length(); i++) {
                    if (manySent[i] == '!' || manySent[i] == '?') {
                        symbols.push_back(i);
                    }
                }
                
                for (int i = 0; i < symbols.size() - 1; i++) {
                    lengths.push_back(abs(symbols[i + 1] - symbols[i] + 1 )); // inserting the lengths
                }
                
                
                // taking the substrings using the indexes of the symbols 
                // and the lenghts from the lengths vector
                // and adding them to sentVec
                for (int i = 0; i < symbols.size(); i += 2) { // this avoids errors like getting 4 sentences out of this string ?hello?world?again? so it only takes ?hello? ?again? 
                    subSent = manySent.substr(symbols[i], lengths[i]); // substring starting at index of the symbol and having lenght from the vector lengths
                    sentVec.push_back(pair<string,int> (subSent, symbols[i]));
                }

                for (auto i : sentVec) {
                    if (checkSentence(i.first) == "WRONG") {
                        wrongResults.push_back(i);
                    }
                }

                if (wrongResults.empty()) {
                    
                    // checking if every sentence begins with uppercase letter
                    
                    for (int j = 0; j < symbols.size(); j++) {
                        if (symbols.back() == manySent.length() - 1) { // if there exists a symbol at the end of the paragraph
                            // then don't check for upper case in the next index
                            symbols.pop_back(); // remove the last element (symbol)
                            
                            if ( (isupper((int)manySent[symbols[j] + 1])) == false) {
                                upCaseErrors.push_back(symbols[j] + 1);
                            }

                        }
                        else { // if there does not exist a symbol at the end then do it for every symbol
                            if ( (isupper((int)manySent[symbols[j] + 1])) == false) {
                                upCaseErrors.push_back(symbols[j] + 1);
                            }
                        }
                        
                    }
                    
                    if (upCaseErrors.empty()) { // if there are no upper case errors
                        cout << "CORRECT\n";
                        
                    }
                    else {
                        caseMistIndex = upCaseErrors[0];
                        cout << "WRONG, mistake at index: " << caseMistIndex << endl;
                    }
                }
                else {
                    mistakeIndex = wrongResults[0].second;
                    cout << "WRONG, mistake at index: " << mistakeIndex << endl;
                }
            }
                    
        }
    }
    catch (int x) {
        switch (x)
        {
        case 111:
            cerr << "Invalid input, you must choose between 1 and 2.\n";
            break;
        
        default:
            break;
        }
    }

    return 0;
}