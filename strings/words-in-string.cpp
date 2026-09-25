#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int countWords(const string &text){

    int count = 0;
    bool inWord = false;

    for (char c: text){

        if(isspace(c)){
            inWord = false;
        }
        else if(!inWord){
            count++;
            inWord = true;
        }
    }

    return count;
}

int main(){
    cout << "Enter some words\n";

    string word;
    getline(cin, word);
    cout << "\nYou entered " << countWords(word) << "words" << endl;
}