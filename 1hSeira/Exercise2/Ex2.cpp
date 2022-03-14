#include "std_lib_facilities.h"

// Comparator that sorts pairs according to the second item
bool comparator(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;

}

void mapValueSort( map<string, float>& mapp ){
    
    // initializing the vector that will contain the sorted map by value
    vector<pair<string, int>> result;
    int counter = 1;
    // copying key-value pairs from the map to the vector
    for (auto i : mapp) {
        result.push_back(i);

    }
  
    // sorting using comparator
    sort(result.begin(), result.end(), comparator);
  
    // printing the sorted results
    for (auto i : result) {
        cout << "Rank "<< counter << " --> " << i.first << ' ' << i.second << " time units" << endl;
        counter++;

    }

}

class Racer {

    // initializing variables 
    float speed = 1; 
    float dist = 0;
    float accel = 0;
    float time = 0; 
    float remDist = 0;
    string id = "default_racer";
    float Vf = 0;

    public:

        // Constructor 
        Racer(string ID, float SPEED, float DIST, float ACCEL) {
            id = ID; 
            speed = SPEED;
            dist = DIST; 
            accel = ACCEL;
        }
        // default constructor ( creating a racer with id = speed = distance = accelaration = 0)
        Racer() {}

        // setters and getters
        void setSpeed(float s) { speed = s; }
        float getSpeed() { return speed; }

        void setDist(float d) { dist = d; }
        float getDist() { return dist; }

        void setAccel(float a) { accel = a; }
        float getAccel() { return accel; }

        void setTime(float t) { time = t; }
        float getTime() {return time; }

        void setRemDist(float rd) { remDist = rd; }
        float getRemDist() { return remDist; }

        void setId(string ID) { id = ID; }
        string getId() { return id; }

        //---------------------------------------------------

        // functions to calculate remaining distance and time 
        void init_remDist(float totalDist) {
            remDist = totalDist - dist;
            // the remaining distance that the driver has to reach the end 
        
        }

        void calc_time() { 
            
            // calculating the time using: 
            // t = (Vf - V0) / a
            // Vf = sqrt(V0^2 + 2ax)

            // finding the final velocity: 
            Vf = sqrt(speed*speed + 2 * accel * remDist);
            
            // finding the time needed to reach the end 
            time = (Vf - speed) / accel;

        }


};

int main() {
    
    // initializing variables
    int num_racers = 0; 
    float totalDist = 0;
    float speed = 0;
    float dist = 0; 
    float accel = 0;
    float finishTime = 0;
    string name = "name";
    map<string, float> ranks; 
    string racerName;

    try{
        
        // asking user for the number of racers
        cout << "Give the number of racers: ";
        cin >> num_racers; 
        if (num_racers <= 0) { throw 106;}

        Racer racer[num_racers];
        
        for (int i = 0; i < num_racers; i++) {

            // asking user for the speed of the racer i 
            cout << "Give speed for racer_" << i + 1 << ": "; 
            cin >> speed;
            if (speed < 0) { throw 106; }

            // asking user to give the distance that the i-th racer has from the start
            cout << "Give racer_" << i + 1 << " distance from the start: ";
            cin >> dist;
            if (dist < 0) { throw 104; }

            // asking user to give the acceleration
            cout << "Give racer_" << i + 1 << " acceleration: ";
            cin >> accel;
            if (accel <= 0) { throw 107; }

            racerName = "Racer_" + to_string(i + 1);
            racer[i] = Racer(racerName, speed, dist, accel);

        }

        // asking user for the total total distance of the race
        cout << "Give total distance of the race: ";
        cin >> totalDist; 
        if (totalDist < 0) { throw 104; }

        for (int i = 0; i < num_racers; i++) {
            // calculating the remaining distance for each player
            racer[i].init_remDist(totalDist);

            // calculating the time for each racer 
            racer[i].calc_time();

        }

        // creating a map that contains the names of the racers as keys and their finishing times as values
        for (int i = 0; i < num_racers; i++) {
            name = racer[i].getId();
            finishTime = racer[i].getTime();
            ranks.insert( pair<string, float>(name, finishTime) );
            
        }

        mapValueSort(ranks);
        
    }
    catch(int x) {

        switch (x)
        {

        case 104:
            cerr << "ERROR " << x << ": Invalid input, variable must be positive or zero.\n";
            break;
        case 105:
            cerr << "ERROR " << x << ": Division by zero.\n";
            break;
        case 106:
            cerr << "ERROR " << x << ": Invalid input, variable must be positive.\n";
            break;
        case 107:
            cerr << "ERROR " << x << ": acceleration negative or zero, We only consider positive acceleration.\n";
            break;

        }

    return 0;

    }
}