
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

// The NOGDI below is needed to prevent Windows from including wingdi.h which has a duplicate
// declaration of 'Polygon' and throws ambiguous error.
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define NOGDI
#endif

#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<array>
#include<regex>
#include<random>
#include<stdexcept>           
#include"Simple_window.h"    
#include"Graph.h"
// NOTE: the image files must be in the location build/'directory_name'/ in order for the program to run
//------------------------------------------------------------------------------

int main() {
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib

    try {
        // initializing variables 
        bool run = true;
        string file_name = "";
        string last_4 = ""; // a variable that will be used for checking the last 4 letters of a file 
        string coor_x = "0";
        string coor_y = "0";
        string label_x = "0";
        string label_y = "0";
        string label = "";
        int coor_x_int = 0;
        int coor_y_int = 0;
        int label_x_int = 0;
        int label_y_int = 0;


        while(run) {
            
            Point tl(200,200);           // to become top left  corner of window
            Simple_window win(tl,800,600,"Image Viewer");    // make a simple window and naming it Image Viewer

            // asking user for a picture
            cout << "Give the name of the file (.jpg or .gif) : ";
            cin >> file_name;

            // checking if user wants to quit 
            if (file_name == "-1" || file_name == "quit") {
                run = false;
                break;
            }
            
            // checking if user gave the correct format for the file 
            for (int i = file_name.size() - 4; i < file_name.size(); i++ ) {
                last_4 += file_name.at(i);
            }
            if (last_4 != ".jpg" && last_4 != ".gif") {
                throw 101;
            }

            // asking the user for coordinates 
            cout << "Give the x-coordinate that you want the image to be placed at : ";
            cin >> coor_x;

            // checking if the coordinates are in the correct form 
            for (char i : coor_x) {
                if (!isdigit(i)) {
                    throw 102;
                }
            }

            cout << "Give the y-coordinate that you want the image to be placed at : ";
            cin >> coor_y;
            
            for (char i : coor_y) {
                if (!isdigit(i)) {
                    throw 102;
                }
            }

            cout << "Give the label that you want to add to the picture : ";
            cin >> label;

            cout << "Give the x coordinate of the label in relation to the upper right corner of the image : ";
            cin >> label_x;  

            for (char i : label_x) {
                if (!isdigit(i)) {
                    throw 102;
                }
            }

            cout << "Give the y coordinate of the label in relation to the upper right corner of the image : ";
            cin >> label_y;

            for (char i : label_y) {
                if (!isdigit(i)) {
                    throw 102;
                }
            }

            // turning the coordinates to integers 
            label_x_int = stoi(label_x);
            label_y_int = stoi(label_y);
            coor_x_int = stoi(coor_x);
            coor_y_int = stoi(coor_y);
            // placing the given image on the coordinates that are given
            Image image(Point(coor_x_int, coor_y_int), file_name);

            // attaching the image to the window 
            win.attach(image);

            win.wait_for_button();       // give control to the display engine
    
        }


       
    }
    catch (int e) {

        switch (e) {
            case 101: 
                cerr << "Error 101, file not in the correct format. \n";
                break;
            case 102:
                cerr << "Error 102, coordinate must be a number. \n";
                break;
        }
    }

   
}

//------------------------------------------------------------------------------
