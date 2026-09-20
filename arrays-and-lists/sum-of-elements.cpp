#include <iostream>

using namespace std;

int calculateSum(int array[], int size){
    int total = 0;

    for (int i = 0; i < size; i++){
        total += array[i];
    }

    return total;
}

int main(){

    int numbers[] = {5, 4, 3, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int total = calculateSum(numbers, size);

    cout << "Total is " << total;

    return 0;
}