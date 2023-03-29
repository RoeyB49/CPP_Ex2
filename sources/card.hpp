# include "stdio.h"
// CPP_Ex2
// Roey Biton
// 313137150

namespace ariel{

class Card{

private:

// The number contains the value of the card (1-13)
int number;
// Can be 4 types which is clubs (♣)=1, diamonds (♦)=2, hearts (♥)=3, and spades (♠)=4.
int CardType;

public:
// Building how card should look like. Card contains a number and a shape like I explained above
   Card(int num, int shape);
   int getCardType();
   int getNumber();

// Function the returns the number(value) of the card
// int getCardType(){

// return CardType;

// }
// // Function the returns the type(shape) of the card
// int getNumber(){

// return number;

// }

};
}