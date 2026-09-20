#include <iostream>

using namespace std;

int smallestElement(int array[], int size){
    int smallest = array[0];

    for (int i =0; i < size; i++){
        if (array[i] < smallest){
            smallest = array[i];
        }
    }

    return smallest;
}

int main(){

    int numbers[] = {5, 4, 3, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int smallest = smallestElement(numbers, size);

    cout << "Smallest is " << smallest;

    return 0;
}