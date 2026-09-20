#include <iostream>
#include <algorithm>

using namespace std;

void reverseArray(int array[], int size){

    reverse(array, array+size);
}

int main(){

    int numbers[] = {5, 4, 3, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    reverseArray(numbers, size);

    cout << "Array after reverse:  " << '\n';

    for(auto num: numbers){
        cout << num << " ";
    }

    return 0;
}