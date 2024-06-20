//
//  Pg126_Q5.cpp
//  Loop_and_Decisions
//
//  Created by optimus on 20.04.24.
//

#include <iostream>
using namespace std;


// right angled triangle left oriented //

/*
int main()
{
    for(int i = 1 ; i<=5 ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout <<  "*" ;
        }
        cout << endl;
    }
    
    return 0;
}
*/



// right angled triangle left oriented reversed //

/*
int main()
{
    for(int i = 5 ; i>=1 ; i--)
    {
        for (int j=i ; j>=1; j--)
        {
            cout <<  "*" ;
        }
        cout << endl;
    }
    
    return 0;
}
*/

// right angled triangle right oriented //

/*
int main()
{
    int max = 4;
    
    for (int i = 1 ; i<=max; i++)
    {
        for (int j = 1 ; j<=max-i ; j++)
        {
            cout << " ";
        }
        
        for (int k = 1 ; k<=i ; k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}
*/

// right angled trianlge right sided reversed //

/*
int main()
{
   
    int max_rows = 5;
    
    for (int i = 1; i<=max_rows ; i++)
    {
        
        for (int j = 0 ; j < i-1; j++)
        {
            cout << " ";
        }
        
        
        for (int k = 1 ; k<=max_rows-i+1; k++)
        {
            cout << "*";
        }
        
        
        cout << endl;
    }
    

    return 0;
}
*/

// Pyradmid //


/*
int main()
{
    int rows = 4;
    int k = 0;
    
    for (int i = 1 ; i<= rows ; i++, k=0)
    {
        for (int j = 1 ; j <=rows-i ; j++)
        {
            cout << " ";
        }
        
        
        while(k != 2 * i - 1 )
        {
            cout << "*";
            k++
            ;
        }
        
        cout << endl;
    }
}
*/


// Inverted Pyramid //


/*
int main()
{
    int rows = 4;
    int k = 0;
    
    for (int i = 1; i<=rows; i++ , k = 0)
    {
        for (int j=1 ; j<i ; j++)
        {
            cout << " ";
        }
        
        while(k != 2*(rows-i)+1)
        {
            cout << "*";
            k++;
        }
        
        cout << endl;
    }
}
*/
