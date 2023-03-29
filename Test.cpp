// CPP_Ex2
// Roey Biton
// 313137150

#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <string.h>
#include <stdexcept>
#include <iostream>
#include <vector>
using namespace ariel;
using namespace std;

TEST_CASE("Player Tests") {
    SUBCASE("Test Player constructor") {
        CHECK_NOTHROW(Player p1("p1"));
        CHECK_NOTHROW(Player p2("p2"));
        CHECK_NOTHROW(Player p3("3"));
        CHECK_NOTHROW(Player p4("4"));
        CHECK_NOTHROW(Player p5("5"));
        CHECK_NOTHROW(Player p6("6"));
        CHECK_NOTHROW(Player p7("7"));
        CHECK_NOTHROW(Player p8("8"));
        CHECK_NOTHROW(Player p9("9"));
        CHECK_NOTHROW(Player p10("10"));
        CHECK_NOTHROW(Player p11("11"));
        CHECK_NOTHROW(Player p12("12"));
        CHECK_NOTHROW(Player p13("13"));
        CHECK_NOTHROW(Player p14("14"));
        CHECK_NOTHROW(Player p15("15"));
        CHECK_NOTHROW(Player p16("16"));
        CHECK_NOTHROW(Player p17("17"));
        CHECK_NOTHROW(Player p18("18"));
        CHECK_NOTHROW(Player p19("19"));
        CHECK_NOTHROW(Player p20("20"));
    }


}

TEST_CASE("Card Tests") {
    SUBCASE("Test Card constructor") {
        Card c1(1, 2);
        CHECK_EQ(c1.getNumber(), 1);
        CHECK_EQ(c1.getCardType(), 2);
    }

    SUBCASE("Test Card getters") {
        Card c2(10, 4);
        CHECK_EQ(c2.getNumber(), 10);
        CHECK_EQ(c2.getCardType(), 4);

    }
}
TEST_CASE("Game Tests") {
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);

    SUBCASE("Test Game member functions") {
        CHECK_NOTHROW(game.playTurn());
        CHECK_NOTHROW(game.printLastTurn());
        CHECK_NOTHROW(game.stacksize());
        CHECK_NOTHROW(game.cardesTaken());
        CHECK_NOTHROW(game.playAll());
        CHECK_NOTHROW(game.printWiner());
        CHECK_NOTHROW(game.printLog());
        CHECK_NOTHROW(game.printStats());
    }

}





