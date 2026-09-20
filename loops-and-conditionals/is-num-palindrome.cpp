#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int reverseNumber(int number){

    string num = to_string(number);

    reverse(num.begin(), num.end());

    return stoi(num);

}

bool checkPalindrome(int number){
    return (reverseNumber(number) == number);
}

int main(){

    int number;
    cin >> number;

    bool isPalindrome = checkPalindrome(number);

    isPalindrome ? cout << "This is a palindrome" : cout << "This is not a palindrome";


}