#include <iostream>

using namespace std;

int secondLargestElement(int *array, int size){
    int largest = array[0];
    int secondLargest = array[0];

    for (int i = 0; i < size; i++){
        if(array[i] > largest){
            secondLargest = largest;
            largest = array[i];
        }
        else if(array[i] > secondLargest){
            secondLargest = array[i];
        }
    }

    return secondLargest;
}

int main(){

    int numbers[] = {5, 4, 3, 0, 1, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int secondLargest = secondLargestElement(numbers, size);

    cout << "Second largest is " << secondLargest;

    return 0;
}