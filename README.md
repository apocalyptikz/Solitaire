<li>Program Objective:</li>
   <p>Create the classes required to create a modified (simplified) version of the card game named Churchill Solitaire.  It is a 2 deck solitaire that uses 9 card piles.  You will only be creating the classes to be used in the game and a main program to deal the games initial setup.</p>

   <p>The classes include card (to store a standard playing card), deck (to store and manipulate a collection of card objects), seqDeck (which is a derived class of deck which only allows certain types of sequences of card objects) and sdPile (which manages a vector of seqDeck objects).</p>

   <p>card objects should do the following:</p>
   <ul>
    <li>default to the first card of standard deck (Ace of Clubs)</li>
	<li>have valid Value Semantics</li>
	<li>provide constructor for (Integer value, String suit)</li>
	<li>provide constructor for (card position in sorted deck)</li>
    <li>set and return valid card suit</li>
    <li>set and return valid card face value</li>
    <li>return card's rank</li>
    <li>return card's point value</li>
    <li>provide full Order Semantics (by card rank)</li>
    <li>return long card names (i.e. Ace of Diamonds)</li>
    <li>return short card names (i.e. AD)</li>
	<li>provide explicit type conversions</li>
     <ul>
	  <li>int (the card's rank)</li>
	  <li>double (the card's point value)</li>
      <li>string (the card's long name)</li>
	 </ul>
   </ul>

   <p>deck objects should do the following:</p>
   <ul>
    <li>have a deep copy constructor</li>
    <li>have a deep assignment operator</li>
    <li>default to a standard deck of 52 cards (see Other section for sequence)</li>
    <li>add a card to the top of the deck (at index 0)</li>
    <li>add a card to the bottom of the deck (at index size())</li>
    <li>insert a card into the deck at some index</li>
    <li>remove a card from the top of the deck</li>
    <li>remove a card from the bottom of the deck</li>
    <li>remove a card from the deck at some index</li>
    <li>return card at the top of the deck</li>
    <li>return card at the bottom of the deck</li>
    <li>reset the deck to a standard deck of 52 cards</li>
    <li>clear the deck</li>
    <li>shuffle the deck</li>
    <li>test if the deck is empty</li>
    <li>overload the sequence operator</li>
    <li>overload the += operator (for deck and card objects)</li>
   </ul>

   <p>seqDeck objects should do the following:</p>
   <ul>
    <li>inherit the deck class</li>
    <li>remove the shuffle function</li>
    <li>remove the reset function</li>
    <li>remove the non-constant reference sequence operator function</li>
    <li>default to an empty deck of cards</li>
    <li>create a constructor to set sequence options</li>
    <li>create tests for update functions based on sequence options</li>
    <li>test all (add/remove/insert) functions for sequence</li>
    <li>set sequence options</li>
	<ul>
	 <li>order (none/ascending/descending/constant)</li>
     <li>value order (none/loose/strict)</li>
     <li>color order (none/alternate/color/suit)</li>
	</ul>
    <li>clear options (would clear options but not cards)</li>
    <li>override the += operator (for seqDeck and card objects)</li>
   </ul>

   <p>sdPile objects should do the following:</p>
   <ul>
    <li>is a collection of seqDeck class objects</li>
    <li>have a deep copy constructor</li>
    <li>have a deep assignment operator</li>
    <li>default to an empty collection of seqDeck objects</li>
    <li>add a seqDeck to the bottom of the sdPile</li>
    <li>add a card to the bottom of the sdPile</li>
    <li>remove and return the bottom seqDeck from the sdPile</li>
	<li>remove and return a sub seqDeck from the sdPile</li>
	 <ul>
	  <li>//to remove the last three cards from the bottom seqDeck of the sdPile[3]</li>
	  <li>sd[4].remCards(3)  //returned as a new seqDeck</li>
	  </ul>
    <li>clear the sdPile</li>
    <li>test if the sdPile is empty</li>
    <li>overload the += operator (seqDeck and card objects)</li>
	<li>validate all update functions</li>
   </ul>
   <pre>
Foundation:
XX XX XX XX    XX XX XX XX

Piles:
9D XX XX XX XX XX XX XX 4H
   KS XX XX XX XX XX AC
      2S XX XX XX QC
         4H XX TD
            8C
			
Stock: XX (79)

From: p8
To: f1
**************************

Foundation:
AC XX XX XX    XX XX XX XX

Piles:
9D XX XX XX XX XX XX 3S 4H
   KS XX XX XX XX XX 
      2S XX XX XX QC
         4H XX TD
            8C
			
Stock: XX (79)

From: stock   (a very bad decision!)
**************************

Foundation:
AC XX XX XX    XX XX XX XX

Piles:
9D XX XX XX XX XX XX 3S 4H
JS KS XX XX XX XX XX 7D 9S
   6C 2S XX XX XX QC 
      8C 4H XX TD AH
         AH 8C 4H
            TS
			
Stock: XX (70)

From: 

   </pre>
   <li>Other:</li><pre>
const size_t card::STDVALUES = 13;
const size_t card::STDSUITS = 4;
const size_t card::STDPOINTS[13] = { 14, 2, 3, 4 , 5, 6, 7 , 8, 9, 10, 11, 12, 13 };
const size_t card::STDRANK[13] = { 12, 0, 1, 2 , 3, 4, 5 , 6, 7, 8, 9, 10, 11 };
const char card::STDVALUEABBRV[13] = { 'A', '2', '3', '4' , '5', '6', '7' , '8', '9', 'T', 'J', 'Q', 'K' };
const std::string card::STDVALUESNAME[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"  };
const char card::STDSUITABBRV[4] = {'C', 'D', 'H', 'S'};
const std::string card::STDSUITNAME[4] = { "Clubs", "Diamonds", "Heart", "Spades" };
</pre>

