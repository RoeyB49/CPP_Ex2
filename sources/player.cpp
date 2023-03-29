# include "player.hpp"
# include "stdio.h"
# include <string>
using std::string;

// CPP_Ex2
// Roey Biton
// 313137150

namespace ariel{

// Constructor
Player::Player(string playername){
    player_name = playername;
    Cards_holding = 0;
    Cards_Deck = 0;
    
}
// Get the name of the player
string Player::GetName(){

    return player_name;
}
// Get the number of cards the player is holding
int Player::CardsHold(){
    return Cards_holding;
}

// Get the number of cards in the deck of the player
int Player::Deck(){
    return Cards_Deck;
}

// Get if it is the turn of the player
bool Player::turn(){

    return turn;
}

}
