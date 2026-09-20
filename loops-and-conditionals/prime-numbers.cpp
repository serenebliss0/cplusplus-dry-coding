#include <cmath>
#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;

    bool isPrime = true;

    if (number <= 1){
        cout << "This is not a prime number";
        return 0;
        
    }

    for (int i = 2; i <= sqrt(number); i++){
        if (number % i== 0){
            cout << "This is not a prime number";
            isPrime = false;
            break;
        }

    }


(isPrime) ? cout << "This is a prime number" : cout << " ";

return 0;
}