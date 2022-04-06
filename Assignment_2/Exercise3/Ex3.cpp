#include "std_lib_facilities.h"

// this function returns the status in a string form 
string status(int statusInt) {
    string statusStr = "No_Status";

    switch (statusInt)
    {
    
    case 0:
        statusStr = "Not Owned";
        break;
    
    case 1: 
        statusStr = "Rented";
        break;

    case 2:
        statusStr = "Bought";
        break;
    }

    return statusStr;
}

// this function reverses the status from string to int 
int reverseStatus(string statusStr) {

    int statusInt = 0;

    if (statusStr == "Not Owned") {
        statusInt = 0;
    }
    else if (statusStr == "Rented") {
        statusInt = 1;
    }
    else if (statusStr == "Bought") {
        statusInt = 2;
    }

    return statusInt;

}



int main() {

    try {
        // initializing variables 
        string filename = "No_Name";
        string input = "No_Input" ;
        string statusStr = "No_Status";
        string movie = "No_Movie";
        int cnt = 1;
        int cnt2 = 1;
        int movieNum = 0;
        int action = 0;
        double price = 0;
        double totalCost = 0;
        vector<string> fileCont;
        vector<string> movies;
        vector<string> statusVec;
        vector<double> prices;

        // asking user to give a filename
        cout << "Give filename : ";
        cin >> filename;

        // opening the file that user has requested
        ifstream ifs(filename);

        // checking if the file exists
        if (ifs.fail()) throw 104;

        // reading the file 
        while (ifs >> input) {
            fileCont.push_back(input);
        }

        cout << "----------------------------------\n";
        cout << "             MOVIES               \n";
        cout << "----------------------------------\n";

        for (int i = 0; i < fileCont.size(); i++) {
            
            // if index is multiple of 3 then it is a movie, after the movie there is the status and then the price
            if (i % 3 == 0) {
                // adding the status of every movie into the status vector
                statusStr = status(stoi(fileCont.at(i+1)));
                statusVec.push_back(statusStr);

                // adding the prive of every movie into the prices vector 
                price = stod(fileCont.at(i+2));
                prices.push_back(price);

                // adding the movie to the movies vector
                movie = fileCont.at(i);
                movies.push_back(movie);

                // printing the movies, their status and their prices
                cout << cnt << " : " <<  movie << " | " << statusStr << " | " << price << " | " << endl ;

                // adding one to the counter ( this will be the number of the movie on the left )
                cnt++;
            }

        }

        // if the vectors movies, prices, status dont have the same size then the file does not have 
        // the correct format 
        if (movies.size() != prices.size() || movies.size() != statusVec.size() ||
            prices.size() != statusVec.size()) throw 101;

        else {
            cout << "----------------------------------\n";
            cout << "          END OF MOVIES           \n"; 
            cout << "----------------------------------\n";
            
            cout << "----------------------------------\n";
            cout << "   | Renting a movie costs 3$ | \n";
            cout << "----------------------------------\n";
            
            while(action != -1) {
                
                // asking user to select a movie 
                cout << "----------------------------------\n";
                cout << "Select a Movie by its number : ";
                cin >> movieNum;

                // checking if the movie number exists and if user inputed -1
                if (movieNum > cnt - 1 || movieNum < 0 && movieNum != -1) throw 102;
                else if(movieNum == -1) {

                    ofstream ofs(filename);
                    if (ofs.fail()) throw 104;            

                    //rewriting the whole file with the new status vec and printing results
                    for (int i = 0; i < movies.size(); i++) {
                        
                        // writing the updated status on the file
                        ofs << movies.at(i) << " " << reverseStatus(statusVec.at(i)) << " " << prices.at(i) << endl;
                        
                        // printing the updated results 
                        cout << cnt2 << " : " <<  movies.at(i) << " | " << statusVec.at(i) << " | " << prices.at(i) << " | " << endl ;

                        cnt2++;
                    }
                    
                    cout << "----------------------------------\n";
                    cout << "The total cost for the movies is : " << totalCost << endl;
                    cout << "----------------------------------\n";

                    break;
                }

                // giving movieNum an adjustment just so I can work with vectors
                movieNum--;

                cout << "Movie : " << movies.at(movieNum) << " | Price : " << prices.at(movieNum) << endl;
                cout << "Buy -> 1 \nRent -> 2\n";
                cout << "Choose Action : ";
                cin >> action;
                cout << "----------------------------------\n";


                if (action != 1 && action != -1 && action != 2) throw 103;
                else {
                    if (action == 1) {
                        // BUYING
                        // adding the price of the movie to the total Cost of the buyer
                        totalCost += prices.at(movieNum);
                        cout << "You bought " << movies.at(movieNum) << endl;

                        // changing info in the statusVec 
                        statusVec.at(movieNum) = "Bought";

                    }
                    else if (action == 2) {
                        // RENTING
                        // adding the rent cost to the total cost
                        totalCost += 3;
                        cout << "You rented " << movies.at(movieNum) << endl;
                        
                        // changing info in the statusVec 
                        statusVec.at(movieNum) = "Rented";
                    }
                    else {
                        // ACTION = -1 

                        ofstream ofs(filename);
                        if (ofs.fail()) throw 104;

                        //rewriting the whole file with the new status vec
                        for (int i = 0; i < movies.size(); i++) {
                            
                            // writing the updated status on the file
                            ofs << movies.at(i) << " " << reverseStatus(statusVec.at(i)) << " " << prices.at(i) << endl;
                            
                            // printing the updated results 
                            cout << cnt2 << " : " <<  movies.at(i) << " | " << statusVec.at(i) << " | " << prices.at(i) << " | " << endl ;

                            cnt2++;
                        }
                        cout << "----------------------------------\n";
                        cout << "The total cost for the movies is : " << totalCost << endl;
                        cout << "----------------------------------\n";

                        break;
                    }

                }
            }
        }
        

    }
    catch(int x) {
        switch (x)
        {
        case 101:
            cerr << "The file does not have correct format. \nIt should be : MOVIE STATUS PRICE .\n";
            break;
        
        case 102:
            cerr << "There is no movie with that number.\n";
            break;

        case 103:
            cerr << "There is no such action. Valid actions are : Buy -> 1 or Rent -> 2\n";
            break;

        case 104:
            cerr << "There is no such file with that name \n";
            break;
        }
    }
    

    return 0;
}