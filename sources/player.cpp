#ifndef CARD_HPP
#define CARD_HPP
# include "player.hpp"
# include "stdio.h"
# include <string>
using std::string;
// CPP_Ex2
// Roey Biton
// 313137150
#include "player.hpp"
#include <iostream>

namespace ariel {

    Player::Player(string playername): player_name(playername), Cards_Deck(52), Cards_holding(0) {}

    string Player::GetName() {
        return 0;
    }

    int Player::CardsHold() {
        return 0;
    }

    int Player::Deck() {
        return 0;
    }

    int Player::stacksize() {
        return 0;
    }

    int Player::cardesTaken() {
        return 0;
    }
}

#endif

