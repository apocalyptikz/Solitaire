//sdPile objects should do the following :
//
//is a collection of seqDeck class objects
//have a deep copy constructor
//have a deep assignment operator
//default to an empty collection of seqDeck objects
//add a seqDeck to the bottom/beginning/index 0 of the sdPile
//remove a seqDeck from the top and bottom of the sdPile
//remove and return a sub seqDeck from the sdPile
//to remove the last three cards from the bottom seqDeck of the sdPile
//sd[4].remCards(3) //returns as a new seqDeck
//clear the sdPile
//test if the sdPile is empty
//overload the += operator (for seqDeck and card objects)
//validate all update functions

#include "sdPile.h"


sdPile::sdPile()
{

}

sdPile::sdPile(const sdPile &pileIn)
{
	_decks = pileIn._decks;
}

sdPile::~sdPile()
{
}

////// VALIDATE //////
void sdPile::add(const seqDeck &deckIn, bool top, const size_t index)
{
	if (top)
	{
		_decks.insert(_decks.begin(), deckIn);
	}
	else if (index != -1)
	{
		_decks.insert(_decks.begin() + index, deckIn);
	}
	else
		_decks.push_back(deckIn);
}

void sdPile::remove(const seqDeck &deckIn)
{
	_decks.erase(std::find(_decks.begin(), _decks.end(), deckIn));
}

seqDeck& remove(const size_t &cards)
{

}

////////////////////////////