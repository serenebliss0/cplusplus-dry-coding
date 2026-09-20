#include <iostream>
#include <cmath>

int main(){
    int startNumber = 2;


    while (startNumber < 100){

    bool isPrime = true;

    for (int i = 2; i <= sqrt(startNumber); i++ ){
        if (startNumber % i == 0){
            isPrime = false;
            break;
        }

    }

    if (isPrime){
        std::cout << startNumber << std::endl;
    }
    startNumber++;
}

    return 0;
}