#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");

    while (true) {
        string strokanach;
        int vibor;
        string stroka;

        cout << "Choose an action:\n1. Reverse the wordn\n2. Display the word without vowelsn\n3. Display the word without consonantsn\n4. Shuffle the letters in the wordn\n5. Exit\n";
        cin >> vibor;
        string vowels = "aeiouAEIOU";

        if (vibor == 1) {
            cout << "Enter a word: ";
            cin >> strokanach;
            string izm = strokanach;
            reverse(izm.begin(), izm.end());
            cout << izm << endl;
        }
        if (vibor == 2) {
            cout << "Enter a word: ";
            cin >> strokanach;
            string word;
            word = strokanach;


            for (size_t i = 0; i < word.length();) {
                if (vowels.find(word[i]) != string::npos) {
                    word.erase(i, 1);
                }
                else {
                    ++i;
                }
            }
            cout <<  word << endl;
        }
        if (vibor == 3) {
            cout << "Enter a word: ";
            cin >> strokanach;
            string word;
            word = strokanach;

            string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
            for (size_t i = 0; i < word.length();) {
                if (consonants.find(word[i]) != string::npos) {
                    word.erase(i, 1);
                }
                else {
                    ++i;
                }
            }
            cout <<  word << endl;
        }
        if (vibor == 4) {
            cout << "Enter a word: ";
            cin >> strokanach;
            string shuffled = strokanach;
            random_device rd;
            mt19937 g(rd());
            shuffle(shuffled.begin(), shuffled.end(), g);
            cout << "Random word: " << shuffled << endl;
        }
        if (vibor == 5) {
            break;
        }
    }

    return 0;
}
