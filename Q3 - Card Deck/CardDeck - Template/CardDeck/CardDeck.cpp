// CardDeck class

#include "CardDeck.h"   // include CardDeck header file


// Definition of member functions of the CardDeck class



void CardDeck::dealCard()
// Randomly generates a new card.
// It should randomly generate a number between 1-4 for the card suit.
// If a 1 is generated the cardSuit should be "Hearts" and so on. 
// It should randomly generate a number between 1-13 for the card face.
// If a 1 is generated the cardFace should be "Ace", if a 2 is generated the
// cardFace should be "2" ... if 12 is generated the cardFace should be "Queen" 
// and so on. It should not return anything.
{
	// Randomly generates a suit for the card suit.
	int suitNum = (rand() % 4) + 1;
	switch (suitNum)
	{
		case 1:
			cardSuit = "Hearts";
			break;

		case 2:
			cardSuit = "Diamonds";
			break;

		case 3:
			cardSuit = "Clubs";
			break;

		case 4:
			cardSuit = "Spades";
			break;
	}

   // Randomly generates a number between 1-13 for the card face
   // It assigns the string Ace when a 1 is generated, it assigns the string 2 with a 2 is generated and so on.
	
	int cardNum = (rand() % 13) + 1;
	std::string face;

	switch (cardNum)
	{
		case 1:
			cardFace = "Ace";
			break;

		case 11:
			cardFace = "Jack";
			break;

		case 12:
			cardFace = "Queen";
			break;

		case 13:
			cardFace = "King";
			break;
		
		default:
			cardFace = std::to_string(cardNum);
			break;
	}

}

std::string CardDeck::getCardSuit()
// This function should ONLY return the cardSuit. It should not generate a new card suit.
{
	return cardSuit;
}

std::string CardDeck::getCardFace()
// This function should ONLY return the cardFace. It should not generate a new card face.
{
	return cardFace;
}
