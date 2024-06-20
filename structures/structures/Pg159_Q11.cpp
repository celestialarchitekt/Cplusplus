//
//  Pg159_Q11.cpp
//  structures
//
//  Created by optimus on 11.05.24.
//


/*

#include <iostream>
using namespace std;

struct Time{
    int hours;
    int minutes;
    int seconds;
};



int main(void)
{
    Time t1,t2,t3;
    
    int t1_totalSeconds;
    int t2_totalSeconds;
    int t3_totalSeconds;
    
    t1.hours = 5;
    t1.minutes = 10;
    t1.seconds = 45;
    
    t2.hours = 7;
    t2.minutes = 25;
    t2.seconds = 55;
    
    
    t1_totalSeconds = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    t2_totalSeconds = t2.hours*3600 + t2.minutes*60 + t2.seconds;
    
    t3_totalSeconds = t1_totalSeconds + t2_totalSeconds;
    
    // extracting hours
    float hrs = (float) t3_totalSeconds/3600;
    t3.hours = (int) hrs;
    float frac_hrs = hrs - t3.hours;

    // extracting minutes
    float temp_mins = frac_hrs*60;
    t3.minutes = int(temp_mins);
    float frac_mins = temp_mins - t3.minutes;
   
    // extracting seconds
    t3.seconds = frac_mins*60;
    
  
    
    cout << t3.hours <<":"<<t3.minutes<<"."<<t3.seconds << endl;
    
    return 0;
    
    
}
*/
