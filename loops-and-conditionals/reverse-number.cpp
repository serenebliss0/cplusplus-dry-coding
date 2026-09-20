#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int reverseNumber(int* number){

    string num = to_string(*number);

    reverse(num.begin(), num.end());

    return stoi(num);

}

int main(){

    int number;
    cin >> number;

    int reversedNumber = reverseNumber(&number);

    cout << reversedNumber;

}