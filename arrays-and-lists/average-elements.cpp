#include <iostream>

using namespace std;

int calculateSum(int array[], int size){
    int average = 0;

    for (int i = 0; i < size; i++){
        average += array[i];
    }

    return average;
}


int main(){

    int numbers[] = {5, 4, 3, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double average = calculateSum(numbers, size) / static_cast<double> (size);

    cout << "Average of elements is " << average;

    return 0;
}