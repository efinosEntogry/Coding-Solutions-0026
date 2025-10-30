#include <iostream>

using namespace std;

int indexOfLargestElement(double array[], int size) {
    if (size <= 0) return -1;
    int inx = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > array[inx]) inx = i;
    }
    return inx;
}

int main() {

    int size;
    cin >> size;
    double array[size];

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << indexOfLargestElement(array, size);

    return 0;
}
