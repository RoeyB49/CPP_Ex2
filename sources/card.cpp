# include "card.hpp"
# include "stdio.h"

namespace ariel{

Card::Card(int num, int shape) : number(num), CardType(shape) {
}


int Card::getCardType(){
return CardType;
}
int Card::getNumber(){
return number;  
}
}