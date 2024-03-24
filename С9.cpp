#include <iostream>
using namespace std;

//1
void copyArray(int* first, int* second, int size) {
    for (int i = 0; i < size; i++) {
        *(second + i) = *(first + i);
    }
}

//2
void reverseArray(int* arr, int size) {
    int* start = arr;               
    int* end = arr + size - 1;      

    while (start < end) {           
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

//3
void copyReverse(int* firstArr, int* secondArr, int size) {
    int* end = firstArr + size - 1;  

    for (int i = 0; i < size; i++) {
        *(secondArr + i) = *end;  
        end--;                      
    }
}

int main() {
    //1
    const int SIZE = 5;
    int firstArray[SIZE] = { 1, 2, 3, 4, 5 };
    int secondArray[SIZE];

    copyArray(firstArray, secondArray, SIZE);

    cout << "First array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << firstArray[i] << " ";
    }
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << secondArray[i] << " ";
    }
    cout << endl << endl;

    //2
    const int SIZE1 = 5;
    int arr[SIZE1] = { 1, 2, 3, 4, 5 };

    cout << "Original array: ";
    for (int i = 0; i < SIZE1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, SIZE1);

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    //3
    const int SIZE2 = 5;
    int firstArr[SIZE2] = { 1, 2, 3, 4, 5 };
    int secondArr[SIZE2];

    copyReverse(firstArr, secondArr, SIZE2);

    cout << "First array: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << firstArr[i] << " ";
    }
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << secondArr[i] << " ";
    }

}
