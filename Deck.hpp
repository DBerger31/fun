// Header file for a deck of cards

#include "Card.hpp"
#include <vector>

#ifndef Deck_hpp_
#define Deck_hpp_

class Deck {
public:
   Deck();
   void Shuffle();

private:
   //const int DECK_SIZE = 52;
   vector<Card> full_deck;
};

#endif
