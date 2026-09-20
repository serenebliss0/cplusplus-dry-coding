#include <iostream>

using namespace std;

struct Count{
    int evenCount;
    int oddCount;
};

Count evenOrOdd(int array[], int size){
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    return {evenCount, oddCount};
}


int main(){

    int numbers[] = {5, 4, 3, 10, 9 , 90, 100, 23, 45, 80, 40, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    Count count = evenOrOdd(numbers, size);

    cout << "Number of even elements " << count.evenCount << '\n';
    cout << "Number of odd elements " << count.oddCount << '\n';

    return 0;
}