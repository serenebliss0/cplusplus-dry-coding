#include <iostream>

using namespace std;

int doFactorial(int number){

    int result = 1;

    for (int i = 1; i <=number; i++){
        result *= i;
    }

    return result;
}

int main(){
    int number;

    cin >> number;

    int factorial = doFactorial(number);

    cout << "\n" << factorial;
}