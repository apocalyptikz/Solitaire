#pragma once

//deck objects should do the following :
//
//have a deep copy constructor
//have a deep assignment operator
//default to a standard deck of 52 cards(see Other section for sequence)
//add a card to the top or bottom of the deck (pass card object)
//insert a card into the deck at some index (exit if invalid)
//remove a card from the top or bottom of the deck
//remove a card from the deck at some index
//return card at top of deck
//return card at bottom of deck
//clear the deck
//shuffle the deck
//test if the deck is empty
//overload the sequence operator [] and const and non const
//overload the += operator (for deck and card objects)

class deck
{
public:
	deck();
	~deck();
};

