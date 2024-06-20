//
//  card_game.cpp
//  structures
//
//  Created by optimus on 12.04.24.
//

/*
#include <iostream>
using namespace std;

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;

const int jack = 11;
const int quen = 12;
const int king = 13;
const int ace = 14;

struct Card
{
    int number;
    int suit;
};

int main()
{
    Card temp, chosen, prize;
    int position;
    
    Card card1 = {7, clubs};
    cout<<"card1 is 7 of clubs\n";
    
    Card card2 = {jack, hearts};
    cout<<"card2 is jack of hearts\n";
    
    Card card3 = {ace, spades};
    cout<<"card 3 is ace of spades\n";
    
    prize = card3;
    cout<<"swapping cards 1 and 3\n";
    
    temp = card1;
    card1 = card3;
    card3 = temp;
    
    cout<<"swapping cards 2 and 3\n";
    
    temp = card2;
    card2 = card3;
    card3 = temp;
    
    cout<<"swapping cards 1 and 2\n";
    
    temp = card1;
    card1 = card2;
    card2 = temp;
    
    cout<<"where is (1,2,3) is the ace of spades\n";
    
    cin>>position;
    
    switch(position)
    {
        case 1: chosen = card1;
            break;
        case 2: chosen = card2;
            break;
        case 3: chosen = card3;
            break;
    }
    
    if (chosen.number == prize.number and chosen.suit == prize.suit)
    {
        cout<<"this is the prize";
    }
    else
    {
        cout<<"not the prize";
    }
    
    return 0;
}

*/
