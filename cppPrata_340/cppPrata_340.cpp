// cppPrata_340.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>

using namespace std;
// struct 

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

//prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //
    rect rplace;
    polar pplace;

    cout << "Enter coordinates x and y \n";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Enter next coordinates. (p for exit) \n";
    }
    cout << "Game over!!!!\n";

   
return 0;
}

polar rect_to_polar(rect xypos)
{
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);

    return answer;

}

void show_polar(polar dapos)
{
    const double rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout <<  " angle = " << dapos.angle * rad_to_deg << " degrees\n";
   
}



