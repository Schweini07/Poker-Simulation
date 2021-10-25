#include "deck.h"

#include <iostream>
#include <algorithm>
#include <random>
#include <unordered_set>

Deck::Deck()
{
    // init deck vector
    for (int i = 2; i < 15; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            deck.push_back(std::make_pair(i, j));
        }
    }
}

void Deck::shuffle()
{
    std::random_device rd;
    std::default_random_engine r ( rd() );
    std::shuffle(deck.begin(), deck.end(), r);
}

void Deck::showDeck()
{
    for (int i = 0; i < deck.size(); i++)
    {
        std::cout << "{" << deck[i].first << ", " << deck[i].second << "}";
        if (i != deck.size()-1) std::cout << " ";
    }
    std::cout << std::endl;
}

std::pair<int, int> Deck::drawCard()
{
    std::pair<int, int> card = deck.back();
    deck.pop_back();
    return card;
}