#include "gm.h"

#include "deck.h"
#include "player.h"

#include <iostream>

void GM::startGame(int peers)
{
    if (peers > MAX_PLAYERS) peers = 6;
    else if (peers < MIN_PLAYERS) peers = 2;

    deck.shuffle();

    for (int i = 0; i < peers; i++)
    {
        Player player;
        player.draw(deck);
        std::cout << player.checkHand() << " |";
        player.showHand();
        players.push_back(player);
    }
}
