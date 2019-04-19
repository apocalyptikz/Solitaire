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
}


seqDeck::~seqDeck()
{
}
