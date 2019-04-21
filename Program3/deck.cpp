#include "deck.h"

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

deck::deck()
{
	for (size_t i = 0; i < 12; ++i)
	{
		for (size_t j = 0; j < 4; ++j)
		{
			//Contructs a card and inserts at back of _cards
			_cards.emplace_back(card(card::STDVALUEABBRV[i], 
				card::STDSUITABBRV[j]));
		}
	}
}

deck::deck(const deck &deckIn)
{
	for (size_t i = 0; i < 53; ++i)
	{
		_cards.push_back(deckIn[i]);
	}
}


deck::~deck()
{
}

void deck::add(const card &cardIn, bool top)
{
	if (top)
		_cards.insert(_cards.begin(), cardIn);
	else
		_cards.push_back(cardIn);
}

int deck::insert(const size_t &index, const card &cardIn)
{
	if (&cardIn == NULL || index == -1)
		return EXIT_FAILURE;
	_cards.insert(_cards.begin() + index, cardIn);
	return (int)index;
}

void deck::remove(bool top)
{
	if (top)
		_cards.erase(_cards.begin());
	else
		_cards.pop_back();
}

void deck::remove(const size_t &index)
{
	_cards.erase(_cards.begin() + index);
}

void deck::shuffle()
{

	std::random_shuffle(_cards.begin(), _cards.end());
}

deck& deck::operator+=(const deck &deckIn)
{
	for (size_t i = 0; i < 53; ++i)
	{
		_cards.push_back(deckIn[i]);
	}
	return *this;
}

deck& deck::operator+=(const card &cardIn)
{
	add(cardIn, false);
	return *this;
}

deck& deck::operator=(const deck &deckIn)
{
	//Self assignment
	if (this == &deckIn)
	{
		return *this;
	}
	_cards.clear();
	for (size_t i = 0; i < 53; ++i)
	{
		_cards.push_back(deckIn[i]);
	}
	return *this;
}