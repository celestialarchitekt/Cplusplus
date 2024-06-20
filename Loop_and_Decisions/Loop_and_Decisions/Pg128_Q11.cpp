//
//  Pg128_Q11.cpp
//  Loop_and_Decisions
//
//  Created by optimus on 24.04.24.
//

/*
#include <iostream>
using namespace std;

int main(void)
{
    int pounds1, pounds2, shillings1, shillings2, pences1, pences2, shillings3=0, pences3=0, pounds3=0;

    char operation;
    
    cout << "enter pounds for amount1: ";
    cin >> pounds1;
    
    cout << "enter shilligs for amount1: ";
    cin >> shillings1;
    
    cout << "enter pences for amount1: ";
    cin >> pences1;
    
    cout << "enter pounds for amount2: ";
    cin >> pounds2;
    
    cout << "enter shilligs for amount2: ";
    cin >> shillings2;
    
    cout << "enter pences for amount2: ";
    cin >> pences2;
    
    cout << "enter the operation (+) (-) (*): ";
    cin >>operation;
    
    switch (operation)
    {
        case '+': cout << "\n Addition of the two amounts gives: ";
            pences3 = pences1 + pences2;
            
            while(pences3>11)
            {
                pences3 -=11;
                shillings3+=1;
            }
            
            shillings3 += shillings1 + shillings2;
            
            while(shillings3>19)
            {
                shillings3 -=19;
                pounds3 +=1;
            }
            
            pounds3 += pounds1 + pounds2;
            
            cout << "\n Final amount after addition:" <<pounds3<<"."<<shillings3<<"."<<pences3 << endl;
            
            break;
            
        case '-': cout << "\n Subtraction of the two amounts gives: ";
            if (pences1>pences2)
            {
                pences3 = pences1 - pences2;
            }
            else
            {
                pences3 = pences2-pences1;
            }
            
            if (shillings1>shillings2)
            {
                shillings3 = shillings1-shillings2;
            }
            else
            {
                shillings3 = shillings2-shillings1;
            }
            
            if (pounds1>pounds2)
            {
                pounds3 = pounds1-pounds2;
            }
            else
            {
                pounds3 = pounds2-pounds1;
            }
            
            
            cout << "\n After subtracting the two amounts:"
            <<pounds3<<"."<<shillings3<<"."<<pences3 << endl;
            
            break;
            
            
        case '*': cout << "multiplication of the two amounts gives: " <<endl;
            
            pences3 = pences1 * pences2;
            
            while(pences3>11)
            {
                pences3 -=11;
                shillings3+=1;
            }
            
            shillings3 = (shillings1 * shillings2) + shillings3;
            
            while(shillings3>19)
            {
                shillings3 -=19;
                pounds3 +=1;
            }
            
            pounds3 = (pounds1 * pounds2) + pounds3;
            
            cout << "\n Final amount after multiplication:" <<pounds3<<"."<<shillings3<<"."<<pences3 << endl;
            
            break;
            
        
        default: cout << "you entered wrong operation";
            
    }
    
    
    return 0;
}

*/
