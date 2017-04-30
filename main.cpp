#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string userString, originalWord, convertedWord, convertedString = "";

    cout << "Please enter a string to be converted to Pig Latin: ";
    getline(cin, userString);

    stringstream stream(userString);

    while (stream >> originalWord) {
        convertedWord = originalWord.substr(1);
        convertedWord.append(originalWord.substr(0, 1));
        convertedWord.append("ay");

        convertedString.append(convertedWord + " ");
    }

    cout << "Pig Latin: " << convertedString;

    return 0;
}