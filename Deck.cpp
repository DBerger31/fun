// Implemenation for DECK

#include "Deck.hpp"


// generates a deck of 52 cards
Deck::Deck(){
   for (int i = 0; i < 4; i++){
      for (int j = 0; j < 13; j++){
         Card *c = new Card(static_cast<Suit>(i), static_cast<Rank>(j));
         full_deck.push_back(*c);
         c->Card::displayCard();
      }
   }
}
