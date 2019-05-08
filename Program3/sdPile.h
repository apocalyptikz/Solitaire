#pragma once
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

#include <vector>
#include "seqDeck.h"

class sdPile
{
public:
	sdPile();
	sdPile(const sdPile &pileIn);
	~sdPile();
	void add(const seqDeck &deckIn, bool top = true, const size_t index = -1);
	void remove(const seqDeck &deckIn);
	seqDeck& remove(const size_t &cards);
	sdPile& operator=(const sdPile &pileIn);
	sdPile& operator+=(const seqDeck &deckIn);
	sdPile& operator+=(const card &cardIn);
protected:
	std::vector<deck> _decks;
};

