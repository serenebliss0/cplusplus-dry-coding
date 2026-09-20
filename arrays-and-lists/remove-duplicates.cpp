#include <iostream>
#include <set>
using namespace std;

//This time I'll use the library instead
int main(){

    int numbers[] = {5, 4, 3, 0, 1, 10, 9 , 90, 100, 23, 45, 80, 40, 80, 80, 45, 3, 2, 0, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    set<int>unique(numbers, numbers+size);

    for (auto number: unique){
        cout << number << " ";
    }

    return 0;
}