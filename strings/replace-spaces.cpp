#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string replace(const string &text){

    string replaced = text;

    for (char &c: replaced){

        if(isspace(c)){
            c = '_';
        }

    }

    return replaced;
}

int main(){
    cout << "Enter some words\n";

    string word;
    getline(cin, word);

    cout << replace(word);
}