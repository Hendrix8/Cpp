
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

// extracts numbers from a string 
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

// this will help us extract max from all x and y's so that we are able to rescale the axes
pair<int, int> extractMaxes(vector< pair<int,int> > points) {
    // initializing variables 
    vector<int> all_x;
    vector<int> all_y;
    int max_x = 0;
    int max_y = 0;
    int temp_x = 0;
    int temp_y = 0;

    for (pair<int, int> point : points) {

        // adding all x and ys to their corresponding vectors
        all_x.push_back(point.first);
        all_y.push_back(point.second);

    }

    max_x = *max_element(all_x.begin(), all_x.end());
    max_y = *max_element(all_y.begin(), all_y.end());

    return make_pair(max_x, max_y);
}

void check_rescale(int &ax_size,int maxim) { 

    // init vars
    string point_first_number = "0";
    int multiplyer = 10;

    if (maxim > 300) {
        
        // translating the axes sizes 
        point_first_number = to_string(maxim).at(0);
        for (int i = 0; i < to_string(maxim).size() - 2; i++) {
            multiplyer *= multiplyer;
        }

        // if it is 4521 then take 4 multiply it by 1000 (multiplyer) and then by 2 
        ax_size = 2 * (stoi(point_first_number) * multiplyer ); // doubling the axes to be sure
    }

}

int main()
{
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib
    

    try {
        // initializing variables
        int ax_size = 300;
        string line = "";
        string point_first_number = "";
        Open_polyline polyline; // creating a polyline object to draw the points of the txt file 
        vector< pair< int, int> > points; // a vector that has pairs of integers
        vector< pair< int, int> > points_transl;
        vector<int> temp_vec; // a vector to store and then make a pair 
        int x_transl = 0; 
        int y_transl = 0;
        int multiplyer = 10;
        int max_x = 0;
        int max_y = 0;
        int temp_x = 0;
        int temp_y = 0;
        

        // NOTE : the variables bellow are adjusted to the exact points that are set in the initialization
        // of the Lines x and y 
        int translation_x = 100; // the points that we need to add to x that translate a point to our coordinate system 
        int translation_y = 500; // same as above but in the case of y (NOTE : in the case of y the direction is inverted
        // and so we have to subtract from the translation.)
        
        ifstream ifs("Points.txt"); // creating an object of ifstream

        if (ifs.is_open()) {

            while(getline(ifs, line)){ //read data from file object and put it into string.

                for (int i : extractNums(line)) {
                    temp_vec.push_back(i);
                }

                // adding the point of the current line to the points vector after translating it to
                // our coordinate system and making it a pair 

                points.push_back( make_pair(temp_vec.at(0), temp_vec.at(1)) );

                // clearing the vector for the next line 
                temp_vec.clear();
            }
        }
        else{
            throw 101;
        }
        
        ifs.close();

        // extracting the maximum values to rescale the axes if it is needed
        max_x = extractMaxes(points).first;
        max_y = extractMaxes(points).second;

        if (max_x >= max_y) {
            check_rescale(ax_size, max_x);
        }
        else {
            check_rescale(ax_size, max_y);
        }

        // normalizing the points 
        for (pair<int, int> point : points) {
            // translating x and y to our coordinate system 
            
            temp_x = point.first / (ax_size / 300); // the ax_size/300 is how much has the axis changed 
            temp_y = point.second / (ax_size / 300); // therefore to normalize in respect to the new
            // axes, we have to divide by that difference 

            temp_x = temp_x + translation_x; 
            temp_y = translation_y - temp_y;

            cout << temp_x << " " << temp_y << endl;

            points_transl.push_back( make_pair(temp_x, temp_y));

        }

        // creating the window 
        Point tl(200,200);          
        Simple_window win(tl,800,600,"Cartesian Plane");    

        // going through the points vector 
        for (pair<int, int> point : points_transl) {

            // adding the point to the polyline
            polyline.add(Point(point.first, point.second));

        }

        // creating lines of the axes and the text
        Text xText(Point(520,510), to_string(ax_size));
        Line x(Point(100,500), Point(500,500));

        Text yText(Point(80,80), to_string(ax_size));
        Line y(Point(100,100), Point(100,500));

        // setting the fonts, colors and sizes
        yText.set_font(Font::times_bold);
        yText.set_font_size(30);
        xText.set_font(Font::times_bold);
        xText.set_font_size(30);
        polyline.set_color(Color::red);

        // attaching the widgets
        win.attach(x);
        win.attach(y);
        win.attach(xText);
        win.attach(yText);
        win.attach(polyline);
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




/*
// if a point has x or y > 300 then we have to scale the axes (normalize the point)
                if (x_transl > 300) {
                    
                    // translating the axes sizes 
                    point_first_number = to_string(x_transl).at(0);
                    for (int i = 0; i < to_string(x_transl).size() - 1; i++) {
                        multiplyer *= multiplyer;
                    }

                    // if it is 4521 then take 4 multiply it by 1000 (multiplyer) and then by 2 
                    ax_size = 2 * (stoi(point_first_number) * multiplyer ); // doubling the axes to be sure
                    
                    // translating x
                    
                    
                }
                if (y_transl > 300 ) {
                     
                    // translating the axes sizes 
                    point_first_number = to_string(y_transl).at(0);
                    for (int i = 0; i < to_string(y_transl).size(); i++) {
                        multiplyer *= multiplyer;
                    }

                    // if it is 4521 then take 4 multiply it by 1000 (multiplyer) and then by 2 
                    ax_size = 2 * (stoi(point_first_number) * multiplyer ); // doubling the axes to be sure
                    
                    // translating y
                }*/