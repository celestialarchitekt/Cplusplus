//
//  example_pg233.cpp
//  Objects_and_Classes
//
//  Created by optimus on 19.06.24.
//

/*
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
    
public:
    Distance(): feet(0), inches(0)
    {}
    
    Distance(int ft, float in): feet(ft), inches(in)
    {}
    
    void getdist()
    {
        cout << "enter feet:";
        cin >> feet;
        
        cout << "enter inches:";
        cin >> inches;
    }
    
    void showdist()
    {
        cout << "feet:" << feet << endl
        << "inches:" << inches << endl;
    }
    
    void add_Distance(Distance d2, Distance d3);
};

int main()
{
    
    Distance d1, d2(2,4) ,d3;
    d3.getdist();
    d1.add_Distance(d2,d3);
    d1.showdist();
    
    return 0;
}

void Distance :: add_Distance(Distance d2, Distance d3)
{
    
    inches = d2.inches + d3.inches;
    
    if (inches>12)
    {
        feet ++;
        inches -=12.0;
    }
 
   feet = d2.feet + d3.feet + feet;
}
*/
