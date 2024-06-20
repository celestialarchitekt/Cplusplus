
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
    
    Distance add_Distance(Distance d3);
};

int main()
{
    Distance d1, d2(2,4), d3;
    d3.getdist();
    
    d1 = d2.add_Distance(d3);
    
    d1.showdist();
    
    return 0;
}


Distance Distance :: add_Distance(Distance d3)
{
    Distance temp;
    temp.inches = inches + d3.inches;
    
    if (temp.inches>12)
    {
        temp.inches -=12.0;
        temp.feet +=1;
    }
    
    temp.feet += feet + d3.feet;
    
    return temp;
}


*/
