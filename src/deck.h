#ifndef _DECK_
#define _DECK_

#include <vector>
#include <utility>

class Deck
{
    public:
        Deck();
        void shuffle();
        void showDeck();
        std::pair<int, int> drawCard();
    private:
        /*
        The deck is filled with 52 cards each of which has a number
        from 2 to 14 representing its value, as well as a number indicating
        what symbol the card is (from 1 to 4; 1 - Heart, 2 - Diamond, 3 - Club, 4 - Spade)
        */
        std::vector<std::pair<int, int> > deck;
};

#endif