#include "std_lib_facilities.h"

class Car {
    private:
        // private variables 
        int ProblemTires;
        int PaintPercentage;
        int ProblemLights;

    public: 
        
        // Cosntructors
        Car();
        Car(int Tires, int Paint, int Lights);

        // setters and getters for the private variables 
        void setProblemTires(int Tires);
        int getProblemTires();

        void setPaintPercentage(int Paint);
        int getPaintPercentage();

        void setProblemLights(int Lights);
        int getProblemLights();

        // Other methods
        void PrintCarStatus();
        float CalculateRepairCosts(float TireCost, float PaintCost, float LightsCost);
};

// giving a body to the methods of the class 

void Car::setProblemTires(int Tires) {
    
    if (Tires < 0 || Tires > 4) {
        throw 101;
    }
    else {
        ProblemTires = Tires;
    }
}

int Car::getProblemTires() { return ProblemTires;}

void Car::setPaintPercentage(int Paint) {

    if (Paint < 0 || Paint > 100) {
        throw 102;
    }
    else { 
        PaintPercentage = Paint;
    }
}



int Car::getPaintPercentage() { return PaintPercentage; }

void Car::setProblemLights(int Lights) {
    
    if (Lights < 0 || Lights > 8) {
        throw 103;
    }
    else {
        ProblemLights = Lights;
    }

    
}

int Car::getProblemLights() { return ProblemLights;}

void Car::PrintCarStatus() {

    cout << "\nCAR STATUS : " << endl;
    cout << "Problematic Tires : " << getProblemTires() << endl;
    cout << "Problematic Lights : " << getProblemLights() << endl;
    cout << "Painting needed : " << getPaintPercentage() << "%\n";
}

float Car::CalculateRepairCosts(float TireCost, float PaintCost, float LightsCost) {

    // initializing variables
    float totalCost = 0;

    // if there are any problems with the tires, lights then calculate cost
    if (getProblemTires() > 0 || getProblemLights() > 0) {

        // if paint percentage is >= 30% then count it in else count only tire and light problems
        if (getPaintPercentage() >= 30) {
            totalCost = getProblemLights() * LightsCost + getProblemTires() * TireCost + getPaintPercentage() * PaintCost;
        }
        else {
            totalCost = getProblemLights() * LightsCost + getProblemTires() * TireCost;
        }

        return totalCost;
    }

    else return totalCost;
}

// giving body to the constructors 
Car::Car() {

    // New car doesn't have problems
    setProblemTires(0);
    setPaintPercentage(0);
    setProblemLights(0);
}

Car::Car(int Tires, int Paint, int Lights) {
    
    // the setters are checking if the user's inputs are ok by definition.
    setProblemTires(Tires);
    setPaintPercentage(Paint);
    setProblemLights(Lights);

}


int main() {

    try{
        // initializing variables 
        float TireCost = 0;
        float LightsCost = 0;
        float PaintCost = 0;

        // asking user for costs 
        cout << "Give the Cost for one Tire : ";
        cin >> TireCost;

        cout << "Give the Cost for one Light : ";
        cin >> LightsCost;

        cout << "Give the Cost for Painting 1"<< "%" << " of the car : ";
        cin >> PaintCost;

        // creating instances of Car
        Car newCar = Car();
        Car usedCar = Car(2, 45, 4); // used car with 2 problematic tires ,needing 45% paint and 4 problematic lights

        cout << "------------------------------------------------------" << endl;
        cout << "STATUS AND COSTS BEFORE INITIALIZING PROBLEMS TO THE NEW CAR : \n";
        newCar.PrintCarStatus();
        usedCar.PrintCarStatus();
        cout << "\nRepair cost for the new car = " << newCar.CalculateRepairCosts(TireCost, PaintCost, LightsCost);
        cout << "\nRepair Cost for the used car = " << usedCar.CalculateRepairCosts(TireCost, PaintCost, LightsCost) << endl;
        cout << "------------------------------------------------------" << endl;
        
        // initializing problems to the new car
        newCar.setPaintPercentage(29);
        newCar.setProblemLights(1);
        newCar.setProblemTires(3);

        // printing the status again
        cout << "------------------------------------------------------" << endl;
        cout << "STATUS AND COSTS AFTER INITIALIZING PROBLEMS TO THE NEW CAR : \n";
        newCar.PrintCarStatus();
        usedCar.PrintCarStatus();
        cout << "\nRepair cost for the new car = " << newCar.CalculateRepairCosts(TireCost, PaintCost, LightsCost);
        cout << "\nRepair cost for the used car = " << usedCar.CalculateRepairCosts(TireCost, PaintCost, LightsCost) << endl;
        cout << "------------------------------------------------------" << endl;

    }
    catch(int x)
    {
        switch (x)
        {
        case 101:
            cerr << "\nCar's problematic tires must be an integer in the set {0, 1, 2, 3, 4}\n";
            break;

        case 102:
            cerr << "\nPaint Percentage must be an integer between 0 and 100\n";
            break;

        case 103:
            cerr <<"\nCar's problematic lights must be an integer in the set {0, 1, 2, 3, 4, 5, 6, 7, 8}\n";
            break;
        }
    }

    return 0;
}


