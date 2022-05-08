
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

//------------------------------------------------------------------------------

vector<int> extractNums(string str) {

    // initializing variables
    string temp_str = "";
    vector<int> nums;

    // this loop runs through the string 
	for (int i = 0; i < str.length(); i++)
	{
        // if a char is digit
		if (isdigit(str[i]))
		{   
            // store it in temp_str
			temp_str.push_back(str[i]);

            // search the rest of the str
			for (int j = i + 1; j < str.length(); j++)
			{
                // if there is another digit, store it , else break
				if (j >= str.length())
				{
					break;
				}
                
				else if (isdigit(str[j]))
				{
					temp_str.push_back(str[j]);
					i = j;
				}
				else
				{
					break;
				}
			}

            // turn str to int and add to nums vector 
			nums.push_back(stoi(temp_str));
            
            // clear temp str
			temp_str.clear();
		}
	}

	return nums;
}


int main()
{
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib
    vector< pair< int, int> > points; // a vector that has pairs of integers
    vector<int> temp_vec; // a vector to store and then make a pair 

    try {
        // initializing variables
        int ax_size = 300;
        string line = "";
        
        ifstream ifs("Points.txt"); // creating an object of ifstream

        if (ifs.is_open()) {

            while(getline(ifs, line)){ //read data from file object and put it into string.

                for (int i : extractNums(line)) {
                    temp_vec.push_back(i);
                }

                // adding the point of the current line to the points vector after making it a pair
                points.push_back( make_pair(temp_vec.at(0), temp_vec.at(1)) );

                // clearing the vector for the next line 
                temp_vec.clear();
            }
        }
        else{
            throw 101;
        }
        
        ifs.close();

        // going through the points vector 
        for (int i = 0; i < points.size(); i++) {

            // if a point has x or y > 300 then scale up the axes
            if (points.at(i).first > ax_size || points.at(i).second > ax_size) {
                ax_size = 2 * ax_size;
            }
        }

        // creating the window 
        Point tl(200,200);          
        Simple_window win(tl,800,600,"Cartesian Plane");    

        // creating lines of the axes and the text
        Text xText(Point(520,510), to_string(ax_size));
        Line x(Point(100,500), Point(500,500));

        Text yText(Point(80,80), to_string(ax_size));
        Line y(Point(100,100), Point(100,500));
  

        // attaching the widgets and setting the fonts 
        win.attach(x);
        win.attach(y);

        yText.set_font(Font::times_bold);
        yText.set_font_size(30);

        xText.set_font(Font::times_bold);
        xText.set_font_size(30);
        
        win.attach(xText);
        win.attach(yText);
        win.wait_for_button();       // give control to the display engine

    }

    catch(int x) {
        switch(x) {

            case 101:
                cerr << "Something went wrong with the file. \n";
                break;
        }
    }
    
}

//------------------------------------------------------------------------------
