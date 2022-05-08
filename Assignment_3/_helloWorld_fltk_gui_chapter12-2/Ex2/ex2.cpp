
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

int main()
{
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib
    
    try {
        // initializing variables
        int ax_size = 300;
        string line = "";

        //Point tl(200,200);           // to become top left  corner of window
        //Simple_window win(tl,800,600,"Cartesian Plane");    // make a simple window

        // creating lines of the axes and the text
        //Text xText(Point(520,510), to_string(ax_size));
        //Line x(Point(100,500), Point(500,500));

        //Text yText(Point(80,80), to_string(ax_size));
        //Line y(Point(100,100), Point(100,500));

        ifstream ifs("Points.txt"); // reading the file 
        
        if (ifs.is_open()) {
            
            getline(ifs, line);

        }
        else{
            throw 101;
        }
        


        // attaching the widgets and setting the fonts 
        //win.attach(x);
        //win.attach(y);

        //yText.set_font(Font::times_bold);
        //yText.set_font_size(30);

        //xText.set_font(Font::times_bold);
        //xText.set_font_size(30);
        
        //win.attach(xText);
        //win.attach(yText);
        //win.wait_for_button();       // give control to the display engine

    }

    catch(int x) {
        switch(x) {

            case 101:
                cerr << "Something went wrong with the file. \n"
                break;
        }
    }
    
}

//------------------------------------------------------------------------------
