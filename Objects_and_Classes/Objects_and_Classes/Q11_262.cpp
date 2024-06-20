//
//  Q11_262.cpp
//  Objects_and_Classes
//
//  Created by optimus on 16.06.24.
//

// when creating sub, mult and div functions, make a switch case


/*
#include <iostream>
using namespace std;

class Fraction
{
    float a,b,c,d;
    
public:
    void getData();
    void addData();
    void lowterms();

};

int main()
{
    Fraction f;
    char ch = 'Y';
    
    
    do {
    
        cout << "getting fractions..." << endl;
        f.getData();
        
        cout << "adding fractions..." << endl;
        f.addData();
        
        cout << "reducing to lowest term...";
        f.lowterms();
        
        cout << "would you like to add fractions again?(Y/N):";
        cin >> ch;
       
        
    } while (ch!='N');
    
    
    return 0;
}

void Fraction :: getData()
{
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    cout << "enter c:";
    cin >> c;
    cout << "enter d:";
    cin >> d;

    cout << "you entered the fraction:" << a <<"/" <<b << "+" << c << "/" << d << endl;
    
}

void Fraction :: addData()
{

    float num, denom, result;
    
    num = a*d + b*c;
    denom = b*d;
    result = num/denom;
    
    cout << "result is: " << result << endl;

}

void Fraction :: lowterms()
{
    int num, denom;
    int tnum, tdenom;
    int gcd=1;                  // greated common divisor
    
    num = a*d + b*c;
    denom = b*d;
    
    if(num<denom)
    {
        for (int i = 1 ; i<=denom; i++)
        {
            if(num%i==0 and denom%i==0)
            {
                gcd = i;
            }
        }
    }
    else
        cout << "fraction reduction not needed!";
    
    
    tnum = num/gcd;
    tdenom = denom/gcd;
    
    cout << "reduced fraction:" << tnum <<"/"<< tdenom << endl;
    
}

*/
