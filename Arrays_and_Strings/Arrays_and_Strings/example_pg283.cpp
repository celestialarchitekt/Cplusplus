//
//  example_pg283.cpp
//  Arrays_and_Strings
//
//  Created by optimus on 22.06.24.
//

/*
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
    
public:
    void getdist()
    {
        cout << "enter feet:";
        cin >> feet;
        
        cout << "enter inches:";
        cin >> inches;
    }
    
    void showdist()
    {
        cout << "feet:" << feet << endl << "inches:" << inches << endl;
    }
};


int main()
{
    const int MAX = 2;
    Distance dist[MAX];
    int n=0;
    char ans;
    int count = 0;
    
    do {
        cout << "enter distance number" << n+1 << endl;
        dist[n++].getdist();
        count++;
        
        cout << "enter another (y/n)?:";
        cin >> ans;
        
        
        if(count>=MAX)
        {
            cout << "exceeding array size";
            break;
        }
        
        
    } while (ans!='n');
    
    
    for(int i=0; i<n ; i++)
    {
        cout << "\n Distance number:" << i+1 << endl;
        dist[i].showdist();
    }
    
    cout << endl;
    
    
    return 0;
}
*/
