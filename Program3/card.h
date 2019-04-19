#pragma once

#include <cstdlib>
#include <string>

//card objects should do the following :
//
//default to the Ace of Spades
//have valid Value Semantics
//provide constructor for (Integer value, String suit)
//provide constructor for (card position in sorted deck)
//provide constructor for (string, string)
//provide constructor for (char, char)
//set and get valid cards suits
//set and get valid cards face values
//provide full Order Semantics(by card value) (comparative)
//return long card names(i.e.Ace of Diamonds)
//return short card names(i.e.AD)
//return position
//return rank (2 lowest, ACE highest)
//provide explicit type conversions
//	int(based on card position in sorted deck)
//	double(based on card's point value)
//	string(long card name)

class card
{
public:
	card(const char valueIn = 'A', char suitIn = 'S');
	card(const int valueIn = 3, const std::string suitIn = "ACE"); //3, "Ace"
	card(const size_t positionInDeck = 39); //Position in sorted deck
	card(const std::string valueIn = "Three", const std::string suitIn = "Diamonds"); //"Three", "Diamonds"
	~card();
	char getFaceValue()const;
	void setFaceValue(const char &faceIn);
	char getSuit()const;
	void setSuitValue(const char &suitIn);
	std::string longName();
	std::string shortName();
	size_t position();
	int rank();
	bool operator<(const card& cardIn);
	bool operator>(const card& cardIn);
	bool operator<=(const card& cardIn);
	bool operator>=(const card& cardIn);
	bool operator==(const card& cardIn);
	bool operator!=(const card& cardIn);
	operator int()const;
	operator double()const;
	operator std::string()const;
private:
	int value;
	char suit;
};

