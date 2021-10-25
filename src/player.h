#ifndef _PLAYER_
#define _PLAYER_

#include "deck.h"

#include <vector>
#include <utility>

class Player
{
    public:
        void draw(Deck &deck);
        /*
        Returns an int from 0 to 9 representing all
        the poker combinations:
        0 - None, 1 - Pair, 2 - Two Pair, 3 - Three of a Kind,
        4 - Straight, 5 - Flush, 6 - Full House, 7 - Four of a Kind,
        8 - Straight Flush, 9 - Royal Flush
        */
        int checkHand();
        void showHand();
    private:
        std::vector<std::pair<int, int> > hand;
};

#endif