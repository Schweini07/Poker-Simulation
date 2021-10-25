#ifndef _GM_
#define _GM_

#include "player.h"
#include "deck.h"

#include <vector>

class GM
{
    public:
        void startGame(int peers);
    private:
    const int MAX_PLAYERS = 6;
    const int MIN_PLAYERS = 2;

    Deck deck;
    std::vector<Player> players;
};

#endif