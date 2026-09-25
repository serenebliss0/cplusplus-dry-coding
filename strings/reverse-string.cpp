#include <iostream>
#include <algorithm>

using namespace std;

void reverseString(string* text){
    reverse(text->begin(), text->end());
}

int main(){
    cout << "Enter a word\n";

    string word;
    cin >> word;

    reverseString(&word);
    cout << "The word reversed is : " << word;
}
