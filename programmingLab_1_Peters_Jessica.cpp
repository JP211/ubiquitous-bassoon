// Jessica Peters
// January 12, 2019
// CISS 242

#include <iostream>
using namespace std;

// Function prototype 
// Changed the name to searchList 
bool searchList(const long[], int, long);


int main()
{
    // Constant for array size (Moved inside int main to maintain scope)
    const int SIZE = 10;
	// Array of numbers that are always played
	long ticket[SIZE] = { 13579,  26791,
		26792,  33445,
		55555,  62483,
		77777,  79422,
		85647,  93121 };

	// This variable will hold the winning number.
	long winningNum;

	// Get this week's winning number.
	cout << "\nPlease enter this week's 5-digit "
		<< "winning lottery number: ";
	cin >> winningNum;

	// Search for the winning number.
	if (searchList(ticket, SIZE, winningNum))
	{
		// If searchList returned true, then
		// the player has a winning ticket.
		cout << "You have a winning ticket.\n";
	}
	else
	{
		cout << "You did not win this week." << endl;
	}

	return 0;
}

/********************************************************
 The searchList function accepts as arguments, an array 
 of numbers, the size of the array, and the number to   
 search for. It determines if the number to search for  
 is in the set of stored numbers using a linear search. 
 It returns true if the number is found, otherwise it   
 returns false.                                         

 Pseudo Code
 Declare found as boolean default to false - return value

 For count = 0 to size of array and not found increment by 1
	If element at count equals search value
		Set found to true
	End If
 End For

 Return found
********************************************************/
bool searchList(const long list[], int numElems, long value)
{
    int index = 0;  // Used subscript to search the array
    bool found = false; // If the value was found
    
    while (index < numElems && !found)
    {
        if (list[index] == value) // If the value is found 
        {
            found = true; // Return boolean as true if winner     
        }
        index++;
    }
    return found;
}
