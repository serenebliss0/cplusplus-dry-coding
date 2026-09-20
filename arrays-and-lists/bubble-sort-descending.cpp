#include <iostream>

using namespace std;

void doBubbleSort(int *array, int size){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < (size-i-1); j++ ){
            if(array[j] < array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

int main(){
    int numbers[] = {1,2,4,5,1,2,3,5,69,30,30,20};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    doBubbleSort(numbers, size);

    for (auto num: numbers){
        cout << num << " ";
    }
}