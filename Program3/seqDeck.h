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
#include "deck.h"
class seqDeck : public deck
{
public:
	seqDeck();
	seqDeck(std::vector<std::string> options);
	~seqDeck();
	void shuffle() = delete;
	void clear();
	void setOptions(const std::vector<std::string> options);
	void add(const card &cardIn);
	int insert(const size_t &index = -1, const card &cardIn = NULL);
	void remove(const bool top = true);
	void remove(const size_t &index = -1);
	card& operator[](int i) = delete;
private:
	struct opt {
		std::string order;
		std::string value;
		std::string color;
		opt()
			:order("none"),
			value("none"),
			color("none")
		{}
	} _options;
};

