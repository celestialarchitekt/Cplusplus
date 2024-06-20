//
//  Pg158_Q3.cpp
//  structures
//
//  Created by optimus on 28.04.24.
//

/*
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
    
};


struct Volume
{
    Distance length;
    Distance width;
    Distance height;
    
};


int main(void)
{
    Volume d1,d2,d3;
    
    d1.length.feet = 10;
    d1.length.inches = 5;
    
    cout << "enter the width in feet:";
    cin >> d2.width.feet;
    cout << "enter width in inches:";
    cin  >> d2.width.inches;
    
    cout << "enter the height in feet";
    cin >> d3.height.feet;
    cout << "enter width in inches:";
    cin  >> d3.height.inches;
    
    
    
    while (d1.length.inches>12)
    {
        d1.length.feet +=1;
        d1.length.inches -= 12;
    }
    
    
    
    while (d2.width.inches>12)
    {
        d2.width.feet +=1;
        d2.width.inches -= 12;
    }
    
    while (d3.height.inches>12)
    {
        d3.height.feet +=1;
        d3.height.inches -= 12;
    }
    
    float x;
    x = d1.length.inches / 12 ;
    d1.length.feet += x;
    
    float y;
    y = d2.width.inches / 12 ;
    d2.width.feet += y;
    
    float z;
    z = d3.height.inches / 12 ;
    d3.height.feet += z;
    
    
    cout << "volume in cubic feet:" << d1.length.feet * d2.width.feet * d3.height.feet << endl;
    
    return 0;
    
    
}
*/
