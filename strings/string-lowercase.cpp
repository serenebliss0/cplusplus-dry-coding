#include <iostream>
#include <algorithm>

using namespace std;

void convertLowercase(string *text){

    for (char &c: *text){
        c = tolower(c);
    }

}

int main(){
    cout << "Enter a word\n";

    string word;
    cin >> word;

    convertLowercase(&word);

    cout << "\n" << word;
}