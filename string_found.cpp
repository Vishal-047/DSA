#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, word;

    // Take input for the main string
    cout << "Enter the main string: ";
    getline(cin, str);

    // Take input for the word to be searched
    cout << "Enter the word to search: ";
    getline(cin, word);

    // Find the first occurrence of the word
    size_t found = str.find(word);

    if (found != string::npos) {
        cout << "The word '" << word << "' is found at position: " << found << endl;
    } else {
        cout << "The word '" << word << "' is not found in the string." << endl;
    }

    return 0;
}

// This code will print the specific word that to be found in the string.............