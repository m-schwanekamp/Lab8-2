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
            count = countVowel(str);
            cout << "Vowel count: " << count << endl;
        }
        else if (str == "Q") {
            return 0;
        }
    }
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
   
