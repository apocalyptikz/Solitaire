#pragma once
#include <vector>
#include "card.h"
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
	deck(const deck &deckIn);
	~deck();
	void add(const card &cardIn, bool top = true);
	int insert(const size_t &index = -1, const card &cardIn = NULL);
	void remove(bool top = true);
	void remove(const size_t &index);
	card& getTopCard();
	card& getBottomCard();
	void clear() { _cards.clear(); }
	void shuffle();
	bool isEmpty()const { return _cards.empty(); }
	deck& operator+=(const deck &deckIn);
	deck& operator=(const deck &deckIn);
	card operator[](int i)const { return _cards.at(i); }
	card& operator[](int i) { return _cards.at(i); }

private:
	std::vector<card> _cards;
};

