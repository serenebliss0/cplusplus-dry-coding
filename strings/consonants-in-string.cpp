#include <iostream>
// #include <cstdlib>
#include <cstring>
#include <string>
#include <cctype>


using namespace std;

int countConsonants(const string& text){

    int count = 0;

    for (auto c : text){
        c = tolower(c);
    }

    for (auto c: text){
        
        if(isalpha(c)){
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;

                default:
                count++;
        }
    }
    }

    return count;
}

int main(){

    cout << "Enter a word or string of text\n";

    string text = " ";
    getline(cin, text);

    cout << "There are " << countConsonants(text) << " consonants in the text";

    return 0;
}