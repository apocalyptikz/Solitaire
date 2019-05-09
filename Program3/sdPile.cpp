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
		this->_decks.insert(_decks.begin(), deckIn);
	}
	else if (index != -1)
	{
		this->_decks.insert(_decks.begin() + index, deckIn);
	}
	else
		this->_decks.push_back(deckIn);
}

//Remove top of pile (first element)
seqDeck& sdPile::remove()
{
	if (_decks.size() != 0)
	{
		seqDeck temp = _decks.front();
		this->_decks.erase(_decks.begin());
		return temp;
	}
	

}

seqDeck& sdPile::remove(const size_t & cards)
{
	if (_decks.size() != 0)
	{
		seqDeck temp;
		size_t i = cards;
		while (!_decks.front().isEmpty() && i > 0)
		{
			temp.add(_decks.front().getTopCard());
			--i;
		}
		return temp;
	}
}

sdPile& sdPile::operator=(const sdPile& pileIn)
{
	if (this != &pileIn && _decks.size() == 0)
	{
		this->_decks = pileIn._decks;
	}
}

sdPile& sdPile::operator+=(const seqDeck & deckIn)
{
	this->add(deckIn);
}

sdPile& sdPile::operator+=(const card & cardIn)
{
	seqDeck temp;
	temp.add(cardIn);
	this->add(temp);
}

////////////////////////////