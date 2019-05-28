// Implemenation of card class

#include "Card.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

/*
srand(time(0));

seeds the random number generator
with a different second value from the computers clock
*/

/*
Suit Card::randSuit(){
   return Suit[rand() % 3]
}

Rank Card::randRank(){
   return Rank[rand() % 12]
}*/


Card::Card(Suit suit, Rank rank){

   s = suit;
   r = rank;
}

string Card::getSuit(){
   switch (s) {
      case 0: return "Clubs";
      case 1: return "Diamonds";
      case 2: return "Hearts";
      case 3: return "Spades";
   }
}

string Card::getRank(){
   switch (r) {
      case 0: return "A";
      case 1: return "2";
      case 2: return "3";
      case 3: return "4";
      case 4: return "5";
      case 5: return "6";
      case 6: return "7";
      case 7: return "8";
      case 8: return "9";
      case 9: return "10";
      case 10: return "J";
      case 11: return "Q";
      case 12: return "K";

   }
}

string Card::displayCard(){
   std::cout << this->getRank() << " Of " << this->getSuit() << std::endl;
}
