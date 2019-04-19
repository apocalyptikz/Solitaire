#include "card.h"

//card objects should do the following :
//
//default to the Ace of Spades
//have valid Value Semantics
//provide constructor for (Integer value, String suit)
//provide constructor for (card position in sorted deck)
//provide constructor for (string, string)
//provide constructor for (integer, integer)
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

const size_t STDPOINTS[13] = { 14, 2, 3, 4 , 5, 6, 7 , 8, 9, 10, 11, 12, 13 };
const size_t STDRANK[13] = { 12, 0, 1, 2 , 3, 4, 5 , 6, 7, 8, 9, 10, 11 };
const char STDVALUEABBRV[13] = { 'A', '2', '3', '4' , '5', '6', '7' , '8', '9', 'T', 'J', 'Q', 'K' };
const std::string STDVALUESNAME[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const char STDSUITABBRV[4] = { 'C', 'D', 'H', 'S' };
const std::string STDSUITNAME[4] = { "Clubs", "Diamonds", "Heart", "Spades" };


card::card(char valueIn, char suitIn)
	: _value(valueIn), _suit(suitIn)
{

}

card::card(int valueIn, std::string suitIn)
{
	//Value passed in will be 1 - 13
	_value = STDVALUEABBRV[valueIn - 1];

	//get first char of suitIn
	_suit = tolower(suitIn.at(0));
}

card::card(size_t positionInDeck)
{
	_value = STDVALUEABBRV[positionInDeck % 13];
	_suit = STDSUITABBRV[(positionInDeck / 13)];
}

card::card(std::string valueIn, std::string suitIn)
{
	for (int i = 0; i < 12; i++)
	{
		if (stringToLower(valueIn) == stringToLower(STDVALUESNAME[i]))
		{
			_value = STDVALUEABBRV[i];
			break;
		}
	}

	//Just get first char for suit
	_suit = tolower(suitIn.at(0));
}

card::~card()
{

}

std::string card::longName()
{
	std::string temp;
	for (int i = 0; i < 12; i++)
	{
		if (_value == STDVALUEABBRV[i])
		{
			temp = STDVALUESNAME[i] + " of ";
			break;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (_suit == STDSUITABBRV[i])
		{
			temp += STDSUITNAME[i];
			break;
		}
	}
	return temp;
}

std::string card::shortName()
{
	return std::string();
}

size_t card::position()
{
	return size_t();
}

int card::rank()
{
	return 0;
}

bool card::operator<(const card & cardIn)
{
	return false;
}

bool card::operator>(const card & cardIn)
{
	return false;
}

bool card::operator<=(const card & cardIn)
{
	return false;
}

bool card::operator>=(const card & cardIn)
{
	return false;
}

bool card::operator==(const card & cardIn)
{
	return false;
}

bool card::operator!=(const card & cardIn)
{
	return false;
}

card::operator int() const
{
}

card::operator double() const
{
}

card::operator std::string() const
{
}

std::string stringToLower(std::string upperString)
{
	std::string temp;
	for (int i = 0; i < upperString.length() - 1; i++)
	{
		temp += tolower(upperString.at(i));
	}
	return temp;
}