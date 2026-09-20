#include <iostream>

using namespace std;

int largestElement(int array[], int size){
    int largest = array[0];

    for (int i =0; i < size; i++){
        if (array[i] > largest){
            largest = array[i];
        }
    }

    return largest;
}

int main(){

    int numbers[] = {5, 4, 3, 0, 1, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largest = largestElement(numbers, size);

    cout << "Largest is " << largest;

    return 0;
}