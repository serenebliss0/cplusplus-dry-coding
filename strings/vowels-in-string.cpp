#include <iostream>
// #include <cstdlib>
#include <cstring>
#include <string>


using namespace std;

inline int countVowels(string text){

    int count = 0;

    for (auto &c : text){
        c = tolower(c);
    }

    for (auto c: text){
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count ++;
                break;
        }
    }

    return count;
}

int main(){

    cout << "Enter a word or string of text\n";

    string text = " ";
    getline(cin, text);

    cout << "There are " << countVowels(text) << " vowels in the text";

    return 0;
}