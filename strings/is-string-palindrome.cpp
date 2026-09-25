#include <iostream>
#include <algorithm>

using namespace std;

bool checkPalindrome(string *text){

    string reversed = *text;

    for (char &c: reversed){
        c = tolower(c);
    }
    reverse(reversed.begin(), reversed.end());

    return ( reversed == *text);
}

int main(){
    cout << "Enter a word\n";

    string word;
    cin >> word;

    checkPalindrome(&word) ? cout << "This is a palindrome" : 
        cout << "This is not a palindrome";
}