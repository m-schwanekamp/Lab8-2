//Lab8-2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int countVowel(string str);

int main(void) {
    string str;
    int count = 0;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        if (getline(cin, str)) {
            countVowel(str);
            cout << "Vowel count: " << countVowel(str) << endl;
        }
        else if (str == "Q") {
            return 0;
        }
    }
}

int countVowel(string str) {
    int count = 0;
    while (str != "\0") {
        if (str == "a" || str == "A" || str == "e" || str == "E"
        || str == "i" || str == "I" || str == "o" || str == "O"
        || str == "u" || str == "U") {
            count++;
            return count;
        }
    }
}
    
   
