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

seqDeck::seqDeck()
{
	deck::clear();
}

seqDeck::seqDeck(const std::string order, const std::string value, 
	const std::string color)
{
	setOptions(order, value, color);
}

seqDeck::~seqDeck()
{
}

void seqDeck::clear()
{
	_options._order = "none";
	_options._value = "none";
	_options._color = "none";
}

void seqDeck::setOptions(const std::string order, const std::string value,
	const std::string color)
{
	_options._order = order;
	_options._value = value;
	_options._color = color;
}

void seqDeck::add(const card &cardIn)
{
	//Check top of this deck, cardIn must satisfy options
	deck::add(cardIn, true);
}

int seqDeck::insert(const size_t &index, const card &cardIn)
{
	if (index == -1 || &cardIn == NULL)
		return EXIT_FAILURE;

}

void seqDeck::remove(const bool top)
{

}

void seqDeck::remove(const size_t &index)
{

}