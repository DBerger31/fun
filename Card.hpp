// Header file for a card

#ifndef Card_hpp_
#define Card_hpp_

using namespace std;

#include <string>

enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum Rank { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

class Card {
public:
   Card(Suit s, Rank r);
   //void ConvertToString();
   //void setSuit();
   //void setRank();
   string getSuit();
   string getRank();
   string displayCard();


private:
   Suit s;
   Rank r;

};

#endif
