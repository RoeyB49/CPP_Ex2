# CPP_Ex2

# War Card Game
This is a two-player card game implementation, played with a standard deck of 52 shuffled cards. At the beginning of the game, the deck is shuffled randomly and divided equally between the two players.

In each turn, both players draw one card from the top of their respective decks. The player with the highest-ranking card takes both cards and adds them to the bottom of their deck. If the players draw cards with the same rank, they place one card face down and another card face up, and the player with the higher-ranking face-up card takes all six cards.

If there is another tie, the process is repeated until one player wins. The game continues until one player takes all the cards or until the cards run out during a tiebreaker. In the event of the latter, each player takes back the cards they placed down during the tiebreaker, and they are split evenly.

The winner of the game is the player who has taken the most cards at the end of the game.

I have implemented the War card game using C++ programming language, created header and source files for class definitions and function prototypes, and developed a Test file to ensure the correctness of the implementation. The implementation has been tested using a Demo file provided by the lecturer.
