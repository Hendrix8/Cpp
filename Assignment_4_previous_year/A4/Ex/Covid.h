# include "std_lib_facilities.h"

struct Symptoms {
    bool cough;
    bool breathingDifficulty;
    bool lossOfTasteOrSmell;
};

class Covid19Virus {

    protected:
        Symptoms symptoms;
        string mutationName;
    
    public:
        virtual int AverageDaysDuration() = 0;
        virtual float TransmissionRate() = 0;

        Symptoms GetSymptoms() {
            return symptoms;
        }

        void SetSymptoms(Symptoms s) {
            symptoms = s;
        }

        string GetInfo() {
            string result = "";

            if (mutationName != "")
                result = "< Mutation : " + to_string(mutationName) + ", Fever : true" + ", Breathing Difficulty : " + to_string(symptoms.breathingDifficulty) + ", Loss Of Taste Or Smell : " + to_string(symptoms.lossOfTasteOrSmell) + ", Average Days Duration : " + to_string(AverageDaysDuration()) + ", Transmission Rate : " + to_string(TransmissionRate()) + ">" ;
            else
                result = "No result.";

            return result;
        } 

};


// subclass CovidMutation1
class CovidMutation1 : public Covid19Virus {

    public:

        // creating the constructor 
        CovidMutation1(string mutName);

        int AverageDaysDuration() {
            // initializing variables
            int days = 10;

            if (GetSymptoms().cough) {
                days += 5;
            }

            if (GetSymptoms().breathingDifficulty) {
                days += 7;
            }

            if (GetSymptoms().lossOfTasteOrSmell) {
                days += 2;
            }

            return days;
        }

        float TransmissionRate() 
};

// subclass CovidMutation2
class CovidMutation2 : public Covid19Virus {

    public:

        // creating the constructor 
        CovidMutation2(string mutName);

        int AverageDaysDuration() = 0;
        float TransmissionRate() = 0;

};