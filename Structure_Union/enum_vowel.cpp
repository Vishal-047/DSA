#include <iostream>
using namespace std;
enum LetterType { Vowel, Consonant, Invalid };
class LetterAnalyzer {
public:
    LetterType analyze(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            switch (c) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    return Vowel;
                default:
                    return Consonant;
            }
        }
        return Invalid;
    }
};
int main() {
    LetterAnalyzer analyzer;
    char c;
    cin >> c;
    LetterType type = analyzer.analyze(c);
    if (type == Vowel) {
        cout << "vowel" << endl;
    } 
    else if (type == Consonant) {
        cout << "consonant" << endl;
    } 
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
