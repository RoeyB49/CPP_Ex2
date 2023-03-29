
// CPP_Ex2
// Roey Biton
// 313137150

namespace ariel{
// A standard player should have the name of the player, the number of cards he is holding,the numbers of cards he have and if it his turn.
    class Player{

private:

    string player_name;
    int Cards_Deck;
    int Cards_holding;
    bool turn;

public:

    Player(string playername);
    string GetName();
    int CardsHold();
    int Deck();
    bool turn();
    int stacksize();
    int cardesTaken();
    };
}