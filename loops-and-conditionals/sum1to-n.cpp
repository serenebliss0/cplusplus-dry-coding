#include <iostream>

int main(){
    int sum = 0;
    int n;

    std::cin >> n;

    for (int i =0; i <= n; i++){
        sum += i;
    }

    std::cout << '\n' << sum <<std::endl;
}