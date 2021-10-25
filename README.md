# Poker Simulation

This program simulates a game of poker with a specific number of players (from 2 to 6). The game can not be played by real people. There is no betting and there are no specific rules, it's basic poker where everyone draws 5 cards. The program prints a number to the terminal representing the combination on every hand.
Here are the translations to the numbers which are printed:
- 0: No combination
- 1: Pair
- 2 Two Pair
- 3: Three of a Kind
- 4: Straight
- 5: Flush
- 6: Full House
- 7: Four of a Kind
- 8 Straight Flush
- 9 Royal Flush
The program does not account for the highest card and just returns the best combination every hand has.
The hand also gets printed. Every card looks similar to this: |5, 2| The first number (in this case 5) stands for the value of the card (ranging from 2 to 14), while the second number represents the symbol of the card(1 - Heart, 2 - Diamond, 3 - Club, 4 - Spade).

## How to run
 
1. Clone the code anywhere on your computer
2. Run `make` to compile it.
3. Run the program with `./a.out PLAYERS`, PLAYERS being the number of Peers who are playing.
