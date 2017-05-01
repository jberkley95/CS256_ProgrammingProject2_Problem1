/**
    CS-256
    MatrixOperations.cpp
    Purpose: Performs matrix operations on two 2D Matrices. Operations include addition, subtraction,
    multiplication, and transpose.

    @author John Berkley
    @version 1.0 4/22/2017
*/

#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

int main() {
    string userString, originalWord, convertedWord, convertedString = "";

    //Read in entire line of input using getLine()
    cout << "Please enter a string to be converted to Pig Latin: ";
    getline(cin, userString);

    //Create stringstream object to use as input stream
    stringstream stream(userString);

    //Read in words from stringstream object
    while (stream >> originalWord) {
        //temp converted word begins as original word minus first letter
        convertedWord = originalWord.substr(1);
        //we then append the first letter to the end of the word
        convertedWord.append(originalWord.substr(0, 1));
        //and append "ay" to the end of that
        convertedWord.append("ay");

        //add converted word into the converted string
        convertedString.append(convertedWord + " ");
    }

    //display fully converted string back to user
    cout << "Pig Latin: " << convertedString << "\n\n";

    system("pause");

    return 0;
}