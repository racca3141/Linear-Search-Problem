// Emerson Racca
// 10/11/2021
// Exam 2 - Linear Search Problem

/*
Allow the user to input a very large string... an essay.

Write a regular c-type function with separation that takes in that string and returns the number of sentences in that string. (Hint: A sentence ends in a period.)

For example:

Enter your essay:

Sunset is the time of day when our sky meets the outer space solar winds. 
There are blue, pink, and purple swirls, spinning and twisting, like clouds of balloons
caught in a whirlwind. The sun moves slowly to hide behind the line of horizon,
while the moon races to take its place in prominence atop the night sky.
People slow to a crawl, entranced, fully forgetting the deeds that must still be done.
There is a coolness, a calmness, when the sun does set.

Number of sentences: 5
*/

#include<iostream>
#include<string>

using namespace std;

int main(void) {
	string myString;
	unsigned int i = 0; // unsigned to make the compiler happy
	int counter = 0;

	cout << "Linear Search Problem\n";
	cout << "Type a large string, and this app counts the number of sentences.\n\n";

	cout << "Enter your essay:\n\n";
	getline(cin, myString);

	//cout << myString.length() << endl << endl;

	do{
		if (myString[i] == '.')
			counter++;
		i++;
	} while (i < myString.length());

	cout << "\nNumber of sentences: " << counter << endl;

	return 0;
}