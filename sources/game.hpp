// CPP_Ex2
// Roey Biton
// 313137150

namespace ariel{
// There is two players in a session since it's a war game
    class Game{
private:
        Player PlayerOne;
        Player PlayerTwo;
public:
    Game(Player PlayerOne , Player PlayerTwo);
    void playTurn();
    void printLastTurn();
    void stacksize();
    void cardesTaken();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
    };
}
