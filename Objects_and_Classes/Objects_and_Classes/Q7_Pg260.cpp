//
//  Q7_Pg260.cpp
//  Objects_and_Classes
//
//  Created by optimus on 15.06.24.
//

/*
#include <iostream>
using namespace std;

class Angle
{
    int degree;
    float minutes;
    char ch;
    
public:
    Angle():degree(0), minutes(0), ch('N')
    {}
    
    Angle(int d, float m, char c): degree(d), minutes(m), ch(c)
    {
        cout << degree << "\u00B0" << minutes << "'" << ch << endl;
    }
    
    void getData();
    void displayData();
};

int main()
{
    Angle position(149, 34.8, 'W');
    Angle position1;
    
    char c = 'Y';
    
    do {
        position1.getData();
        position1.displayData();
        
        cout << "would you like to enter another value? (Y|N):";
        cin >> c;

    } while(c!='N');
    
    return 0;
}

void Angle::getData()
{
    cout << "enter degree:";
    cin >> degree;
    
    cout << "enter minutes:";
    cin >> minutes;
    
    cout << "enter direction:";
    cin >> ch;
}

void Angle::displayData()
{
    cout << degree << "\u00B0" << minutes << "'" << ch << endl;
}

*/
