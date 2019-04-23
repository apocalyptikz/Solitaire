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
	card(const char valueIn = 'A', char suitIn = 'C');
	card(const int valueIn = 3, const std::string suitIn = "Ace");
	card(const size_t positionInDeck = 39);
	card(const std::string valueIn = "Ace", const std::string suitIn = "Clubs");
	~card();
	char getFaceValue()const { return _value; }
	void setFaceValue(const char &faceIn) { _value = faceIn; }
	char getSuit()const { return _suit; }
	void setSuitValue(const char &suitIn) { _suit = suitIn; }
	std::string longName()const;
	std::string shortName()const;
	int pointValue()const;
	int rank()const;
	bool operator<(const card& cardIn);
	bool operator>(const card& cardIn);
	bool operator<=(const card& cardIn);
	bool operator>=(const card& cardIn);
	bool operator==(const card& cardIn);
	bool operator!=(const card& cardIn);
	operator explicit int()const;
	operator explicit double()const;
	operator std::string()const;
	const static size_t STDVALUES;
	const static size_t STDSUITS;
	const static size_t STDPOINTS[13];
	const static size_t STDRANK[13];
	const static char STDVALUEABBRV[13];
	const static std::string STDVALUESNAME[13];
	const static char STDSUITABBRV[4];
	const static std::string STDSUITNAME[4];
private:
	char _value;
	char _suit;
};


std::string stringtolower(std::string);
std::string stringToLower(std::string upperString)
{
	std::string temp;
	for (int i = 0; i < upperString.length() - 1; i++)
	{
		temp += tolower(upperString.at(i));
	}
	return temp;
}