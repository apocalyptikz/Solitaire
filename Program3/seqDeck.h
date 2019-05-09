#pragma once

//seqDeck objects should do the following :
//cannot change something in the deck
//
//inherit the deck class
//remove the shuffle function
//remove the reset function (clear?)
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

#include <bitset>
#include "deck.h"
class seqDeck : public deck
{
public:
	seqDeck();
	seqDeck(int options);
	~seqDeck();
	void shuffle() = delete;
	void clear();
	void setOptions(int options);
	void add(const card &cardIn);
	int insert(const card &cardIn, const size_t &index = -1);
	void remove();
	void remove(const bool top = true) = delete;
	void remove(const size_t &index = -1) = delete;
	card& operator[](int i) = delete;
	const card operator[](size_t i) { return deck::operator[](i); }
private:
	int _options;
};

