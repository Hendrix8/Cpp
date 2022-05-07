#include "std_lib_facilities.h"

class Product {
    protected: 
        string Description;
        float ProductWeight;
    
    public:
        virtual void PrintDetails() = 0;
        virtual float CalculatePricePerGram() = 0;

        void SetDescription(string Desc) {
            Description = Desc;
        }

        void SetWeight(float Weight) {
            ProductWeight = Weight;
        }
};

class SugarCandies : public Product {

    private:
        // initializing variables
        bool gluten = false;
        float sugarPercent = 0;
        string Gluten = "Free";


    public:

        SugarCandies(float weightC, float sugar, bool gl) {
            SetWeight(weightC);
            SetSugPerc(sugar);
            SetGluten(gl);
        }

        float CalculatePricePerGram() {

            float cost = 0.25 * ProductWeight + 0.05 * sugarPercent;

            if (GetGluten() == false) {
                SetDescription("Good Candy");
                Gluten = "Free";
                cost += 1;
            }
            else {
                SetDescription("Bad Candy");
                Gluten = "Full";
            }

            return cost;

        }

        void PrintDetails() {
            if (GetGluten() == false) {
                SetDescription("Good Candy");
               
            }
            else {
                SetDescription("Bad Candy");
               
            }
            
            cout << "<Type : Candy" << ", Description : " << Description
            << ", Gluten : " << Gluten << ", Sugar Percentage : "
            << sugarPercent * 100 << "%, Weight : " << ProductWeight
            << ", Price : " << CalculatePricePerGram() << "$ > \n";
        }

        void SetGluten(bool glut) {
            gluten = glut;
            if (glut == false) {
                Gluten = "Free";
            }
            else {
                Gluten = "Full";
            }
        }
        bool GetGluten() {
            return gluten;
        }

        void SetSugPerc(float sugPer) {
            sugarPercent = sugPer;
        }
        float GetSugPerc() {
            return sugarPercent;
        }


        
};

class Nuts : public Product {

    private:

        // init vars
        bool mix = false;
        float saltPercent = 0;
        float cost = 0;
        string mixInfo = "Mixed";

    public:

        Nuts(float weightN, float sal, bool mixN) {
            SetMixed(mixN);
            SetWeight(weightN);
            SetSalt(sal);
        }

        float CalculatePricePerGram() {
            float cost = 0.15 * ProductWeight + 0.1 * saltPercent;
            if (mix == true) { 
                cost += 0.5;
                SetDescription("Good Nut");
                mixInfo = "Mixed";
            }
            else {
                SetDescription("Bad Nut");
                mixInfo = "Not Mixed";
            }

            return cost;
        }
        void PrintDetails() {

            if (mix == true) { 
                SetDescription("Good Nut");
                mixInfo = "Mixed";
            }
            else {
                SetDescription("Bad Nut");
                mixInfo = "Not Mixed";
            }

            cout << "<Type : Nut, " << "Description : " << Description
            << ", " << mixInfo << ", Salt Percentage : " << saltPercent * 100 << "%, "
            << ", Weight : " << ProductWeight << ", Price : " << CalculatePricePerGram() << "$ > \n";
        }

        void SetSalt(float salt) {
            saltPercent = salt;
        }
        float GetSalt() {
            return saltPercent;
        }

        void SetMixed(bool m) {
            mix = m;
        }
        bool GetMixed() {
            return mix;
        }



};


int main() {

    bool run = true;
    string type = "";
    string sugarStr = "";
    string saltStr = "";
    string answer = "";
    string candyWeightStr = "";
    string nutWeightStr = "";
    float candyWeight = 0;
    float nutWeight = 0;
    float salt = 0;
    float sugar = 0;
    bool glut = false;
    bool mixed = false;

    vector<Product*> products;

    try {
        while (run == true) {

            cout << "Give the type of the product : ";
            cin >> type;

            if (type == "-1") {
                run = false;

                if (products.empty() == false) {
                    for (int i = 0; i < products.size(); i++) {
                        products.at(i)->PrintDetails();
                    }
                }
                else {
                    cout << "There are no products. \n";
                }

                break;
            }

            if (type != "Candy" && type != "candy" && type != "Nut" && type != "nut") {
                throw 101;
            }

            if (type == "Candy" || type == "candy") {
                
                cout << "Give the percentage of the sugar in the candy : ";
                cin >> sugarStr;
                
                for (char x : sugarStr) {
                    if (!isdigit(x)) {
                        throw 102;
                    }
                }

                if (stof(sugarStr) < 0 || stof(sugarStr) > 100) {
                    throw 102;
                }

                sugar = stof(sugarStr);

                cout << "Does the candy have gluten ? : (answer with a yes or a no) ";
                cin >> answer;
                
                if (answer != "yes" && answer != "Yes" && answer != "no" && answer != "No") {
                    throw 103;
                }

                else if (answer == "yes" || answer == "Yes") {
                    glut = true;
                }
                else if (answer == "no" || answer == "No") {
                    glut = false;
                }

                cout << "What is the weight of the candy ? : ";
                cin >> candyWeightStr;

                for (char x : candyWeightStr) {
                    if (!isdigit(x)) {
                        throw 104;
                    }
                }

                if (stof(candyWeightStr) < 0) {
                    throw 104;
                }

                candyWeight = stof(candyWeightStr);
                
                products.push_back(new SugarCandies(candyWeight, sugar/100, glut));



            }

            else if (type == "Nut" || type == "nut") {

                cout << "Give the percentage of the salt in the nuts : ";
                cin >> saltStr;
                
                for (char x : saltStr) {
                    if (!isdigit(x)) {
                        throw 102;
                    }
                }

                if (stof(saltStr) < 0 || stof(saltStr) > 100) {
                    throw 102;
                }

                salt = stof(saltStr);

                cout << "Are the nuts mixed ? : (answer with a yes or a no) ";
                cin >> answer;
                
                if (answer != "yes" && answer != "Yes" && answer != "no" && answer != "No") {
                    throw 103;
                }

                else if (answer == "yes" || answer == "Yes") {
                    mixed = true;
                }
                else if (answer == "no" || answer == "No") {
                    mixed = false;
                }

                cout << "What is the weight of the nuts ? : ";
                cin >> nutWeightStr;

                for (char x : nutWeightStr) {
                    if (!isdigit(x)) {
                        throw 104;
                    }
                }

                if (stof(nutWeightStr) < 0) {
                    throw 104;
                }

                nutWeight = stof(nutWeightStr);
                
                products.push_back(new Nuts(nutWeight, salt/100, mixed));

                }



        }

    }

    catch(int x) {
        switch (x)
        {
        case 101:
            cerr << "This type does not exist \n";
            break;

        case 102:
            cerr << "Sugar must be a percentage \n";
            break;

        case 103:
            cerr << "Answer must be a yes or a no \n";
            break;

        case 104:
            cerr << "Weight must be a positive number \n";
            break;

        }

    }
    
    return 0;
}