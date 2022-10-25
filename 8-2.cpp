//Lab8-2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int countVowel(string str) {
    int count = 0;
     while ((str) != '\0') {
        if (str == 'a' || str == 'A' || str == 'e' || str == 'E' 
        || str == 'i' || str == 'I' || str == 'o' || str == 'O'
        || str == 'u' || str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main () {
   // string greeting = "Hello World!";
   // string sub = greeting.substr(0);
   // cout << sub << endl;
    string input;
    string str;
    cout << "Enter a string or Q to quit: ";
    cin >> input;
    if (cin >> input) {
        cout << "Vowel count: " << countVowel(str) << endl;
    }
    else return 0;
    }

   