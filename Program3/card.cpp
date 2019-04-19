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
	: value((int)valueIn), suit(suitIn)
{

}

card::card(int valueIn, std::string suitIn)
	:value(valueIn)
{
	char* temp = new char[1];
	std::strcpy(temp, suitIn.c_str());
	suit = temp;

}

card::card(size_t positionInDeck)
{
}

card::card(std::string valueIn, std::string suitIn)
{
}

card::~card()
{
}

char card::getFaceValue() const
{
	return 0;
}

void card::setFaceValue(const char & faceIn)
{
}

char card::getSuit() const
{
	return 0;
}

void card::setSuitValue(const char & suitIn)
{
}

std::string card::longName()
{
	return std::string();
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
