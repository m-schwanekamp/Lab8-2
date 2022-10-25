//Lab8-2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int countVowel(string str);

int main(void) {
   // string greeting = "Hello World!";
   // string sub = greeting.substr(0);
   // cout << sub << endl;
    string input;
    string str;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        countVowel(input);
        cout << "Vowel count: " << countVowel(str) << endl;
    }
    return 0;
}

int countVowel(string str) {
    int count;
    while (str != "\0") {
        if (str == "a" || str == "A" || str == "e" || str == "E"
        || str == "i" || str == "I" || str == "o" || str == "O"
        || str == "u" || str == "U") {
            count++;
        }
    }
    return count;
}
    
   
