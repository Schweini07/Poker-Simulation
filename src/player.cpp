#include "player.h"

#include "deck.h"

#include <iostream>
#include <map>

void Player::draw(Deck &deck)
{
    for (int i = 0; i < 5; i++)
    {
        hand.push_back(deck.drawCard());
    }
    std::sort(hand.begin(), hand.end());
}

int Player::checkHand()
{
    int first_value = hand[0].first;
    int symbol = hand[0].second;
    std::map<int, int> appearances;

    // Straight Flush, Straight
    bool flush = true;
    // having to use an extra loop so we can be sure it's
    // a flush, as the second loop can break
    for (int i = 0; i < hand.size(); i++)
    {
        if (hand[i].second != symbol)
            flush = false;
    }
    for (int i = 0; i < hand.size(); i++)
    {
        if (hand[i].first != first_value+i)
            break;
        if (i == hand.size()-1)
            return flush ? 8 : 5;
    }

    // Royal Flush, Flush
    bool royal = true;
    for (int i = 0; i < hand.size(); i++)
    {
        if (hand[i].second != symbol)
            break;
        if (hand[i].first != i+10)
            royal = false;
        if (i == hand.size()-1)
            if (royal) return 9;
    }

    // Four of a Kind, Three of a Kind, Two Pair and Pair
    for (auto card : hand)
    {
        if (appearances.find(card.first) == appearances.end())
            appearances.emplace(card.first, 1);
        else
            appearances.at(card.first) += 1;
    }

    bool has_pair = false;
    for (std::map<int, int>::iterator it = appearances.begin(); it != appearances.end(); it++)
    {
        if (it->second == 4)
                return 7;
        // has to be done here, so 4 of a Kind is returned when there's also a Flush.
        else if (flush)
            return 6;
        else if (it->second == 3)
            return 3;
        else if (it->second == 2)
        {
            if (has_pair)
                return 2;
            has_pair = true;
        }
    }
    if (has_pair)
        return 1;

    return 0;
}

void Player::showHand()
{
    for (auto card : hand)
    {
        std::cout << card.first << ", " << card.second << "|";
    }
    std::cout << std::endl;
}