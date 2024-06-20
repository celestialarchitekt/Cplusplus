//
//  Q2_Pg259.cpp
//  Objects_and_Classes
//
//  Created by optimus on 13.06.24.
//

/*

#include <iostream>
using namespace std;

class tollBooth
{
    unsigned int count_cars;
    double total_money;
    
public:
    tollBooth(): count_cars(0), total_money(0)
    { }
    
    void payingCar();
    void noPayCar();
    void displayData();
    
    
};


int main()
{
    tollBooth tb;
    char ch = 'Y';
    int option;
    
    
    while(ch!='N')
    {
        cout << "select 1 for paid car and 2 for unpaid car:";
        cin >> option;
        
        switch(option)
        {
            case 1: cout << "case 1 selected" << endl;
                tb.payingCar();
                cout << "would you like to enter option again?:";
                cin >> ch;
                break;

            case 2: cout << "case 2 selected" << endl;
                tb.noPayCar();
                cout << "would you like to enter option again?:";
                cin >> ch;
                break;
                
            default: cout << "wrong choice" << endl;
                break;
            
        }
        
    }
    
    tb.displayData();
    
    return 0;
}




void tollBooth::payingCar()
{
    count_cars++;
    total_money = total_money + 0.50;
}

void tollBooth::noPayCar()
{
    count_cars++;
}

void tollBooth::displayData()
{
    cout << "total number of cars:" << count_cars << endl;
    cout << "total payment:" << total_money << endl;
}

*/
