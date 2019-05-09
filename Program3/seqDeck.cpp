#include "seqDeck.h"

//seqDeck objects should do the following :
//cannot change something in the deck
//
//inherit the deck class
//remove the shuffle function
//remove the reset function
//remove the non-const reference seq operator function
//default to an empty deck of cards
//create a constructor to set sequence options
//create tests for update functions based on sequence options
//test all(add / remove / insert) functions for sequence
//set sequence options
//	order(none / ascending / descending / constant)
//	value order(none / loose / strict)
//	color order(none / solid / alternate / color / suit)
//clear options(would clear options but not cards none/none/none)
//override the += operator (seqDeck and card)

const int None = 0,
		OrderAsc = 1,
		OrderDesc = 2,
		OrderConst = 4,
		ValOrderNone = 8,
		ValOrderLoose = 16,
		ValOrderScrict = 32,
		ColorOrderNone = 64,
		ColorOrderSolid = 128,
		ColorOrderAlt = 256;

seqDeck::seqDeck()
{
	deck::clear();
}

seqDeck::seqDeck(int options)
{
	setOptions(options);
}

seqDeck::~seqDeck()
{
}

void seqDeck::clear()
{
	//Set options to none
}

void seqDeck::setOptions(int options)
{
	//Toggle option
	_options ^= options; 
}

void seqDeck::add(const card &cardIn)
{
	//All the cards are of equal rank (same card)?
	if ((_options & OrderConst) != 0)
	{
		if (getTopCard() != cardIn)
			return;
	}
	if ((_options & OrderAsc) != 0)
	{
		if ((getTopCard() <= cardIn))
			return;
	}
	if ((_options & ValOrderScrict) != 0)
	{
		if ((getTopCard() - cardIn) != 1)
			return;
	}
	if ((_options & ColorOrderAlt) != 0)
	{
		if (getTopCard().getSuit() == getTopCard().getSuit())
			return;
	}
	if ((_options & ColorOrderSolid) != 0)
		if (getTopCard().getSuit() != getTopCard().getSuit())
			return;

	deck::add(cardIn, true);
}

//Check both sides of insertion??
int seqDeck::insert(const card &cardIn, const size_t &index)
{
	

}

void seqDeck::remove()
{
	deck::remove(true);
}
