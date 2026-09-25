#include <iostream>
#include <algorithm>

using namespace std;

void convertUppercase(string *text){

    for (char &c: *text){
        c = toupper(c);
    }

}

int main(){
    cout << "Enter a word\n";

    string word;
    cin >> word;

    convertUppercase(&word);

    cout << "\n" << word;
}