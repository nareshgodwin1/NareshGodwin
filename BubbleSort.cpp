#include <iostream>

int main();



void bubblesort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


int main() {

    int input;{};
    int Linput = 0;
  
    std::cout << "Enter a 5 to 9 digit number: ";  
    std::cin >> input;

    for (int i = input; i >= 1;){
        i = i/10;
        Linput++;
    }

    int array[Linput];
    int tempI = input;

    for (int i = Linput; i > 0; i--){
        int value = 0; 
        value = tempI % 10;
        tempI /= 10;

        array[i] = value;
    }

    bubblesort(array, Linput);

    for (int k = 0; k < Linput-1; k++)
        std::cout << array[k];

    return 0;
}