//Lab8-2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int countVowel(string str);

int main(void) {
    string str;
    string input;
    int count = 0;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        count = countVowel(str);
        cout << "Vowel count: " << count << endl;
    }
    return 0;
}

int countVowel(string str) {
    int length_of_string = str.length();
    int count = 0;
    for (int i = 0; i < length_of_string; i++) {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E'
        || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O'
        || str[i] == 'u' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}
