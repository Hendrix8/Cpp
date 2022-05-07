#include "std_lib_facilities.h"
#include "Covid.h"


//-------------------- class CovidMutation1 -------------------- //

// CovidMutation1 constructor 
CovidMutation1::CovidMutation1(string mutName) { CovidMutation1::mutationName = mutName; }

// Creating the methods of the subclass CovidMutation1
int CovidMutation1::AverageDaysDuration() {

    
}

float CovidMutation1::TransmissionRate() {

    // initializing variables 
    float transmissionRate = 0;

    if (GetSymptoms().cough) {
        transmissionRate += 0.2;
    }

    if (GetSymptoms().breathingDifficulty) {
        transmissionRate += 0.05;
    }

    if (GetSymptoms().lossOfTasteOrSmell) {
        transmissionRate += 0.15;
    }

    return transmissionRate;

}

//---------------------------------------------------------------- //


//-------------------- class CovidMutation2 -------------------- //

// CovidMutation2 constructor 
CovidMutation2::CovidMutation2(string mutName) { CovidMutation2::mutationName = mutName; }

// Creating the methods of the subclass CovidMutation1
int CovidMutation2::AverageDaysDuration() {

    // initializing variables
    int days = 5;

    if (GetSymptoms().cough) {
        days += 8;
    }

    if (GetSymptoms().breathingDifficulty) {
        days += 2;
    }

    if (GetSymptoms().lossOfTasteOrSmell) {
        days += 1;
    }

    return days;
}



float CovidMutation2::TransmissionRate() {

    // initializing variables 
    float transmissionRate = 0;

    if (GetSymptoms().cough) {
        transmissionRate += 0.25;
    }

    if (GetSymptoms().breathingDifficulty) {
        transmissionRate += 0.08;
    }

    if (GetSymptoms().lossOfTasteOrSmell) {
        transmissionRate += 0.12;
    }

    return transmissionRate;

}



//---------------------------------------------------------------- //



int main() {

    try {   

        // initializing variables 
        string mutName = "";
        string answer = "";
        vector<Covid19Virus> virus;  
        
        while (mutName != "quit" && answer != "quit") {
            
            cout << "Give type of mutation (1 or 2) : ";
            cin >> mutName;

            if (mutName != "1" && mutName != "2") {
                throw 101;
            }

            if (mutName == "1") {
                int a=0;
                CovidMutation1 covid(mutName);
            }

            cout << "Cough ? (Type yes or no) ";
            cin >> answer;

            
        }
    }
    catch(int x) {

        switch (x) {
            case 101: 
                cerr << "Mutation type does not exist. \n";
        }
    }
    
    
    return 0;
}