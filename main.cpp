#include <iostream>
#include <vector>
#include <string>

using namespace std;

void quickSort(vector<int> &array, int left, int right);
int findMedian(vector<int> &array, int left, int right);
int main() {

    int SIZE = 20;
    vector<int> array(SIZE);

    for (int i = 0; i < SIZE; i++)
        array[i] = rand() % 201 - 100;
    quickSort(array, 0, SIZE - 1);
    return 0;
}

void quickSort(vector<int> &array, int left, int right) {

    int middleNumber;
    const int leftPos = left;
    const int rightPos = right;
    int pivot = 0;
    int pivotIndex = findMedian(array, left, right);
    pivot=array[pivotIndex];

    /*if (array[left] <= array[right] && array[left] <= array[median]) {
        if (array[right] >= array[median]) {
            pivot = array[median];
            pivotIndex = median;
        }
    }

    if (array[median] <= array[right] && array[median] <= array[left]) {
        if (array[right] >= array[left]) {
            pivot = array[left];
            pivotIndex = left;
        }
    }

    if (array[right] <= array[left] && array[right] <= array[median]) {
        if (array[left] >= array[right]) {
            pivot = array[right];
            pivotIndex = right;
        }
    }*/

    while (left < right) {
        while (array[right] > pivot && left < right) {
            right--;
        }
        while (array[left] < pivot && left < right) {
            left++;
        }
        middleNumber = array[right];
        array[right] = array[left];
        array[left] = middleNumber;
    }

    if (array[right] != pivot) {
        middleNumber = array[right];
        array[right] = array[pivotIndex];
        array[pivotIndex] = middleNumber;
    }
    pivot = right;
    right = rightPos;
    left = leftPos;
     if (left < pivotIndex) { quickSort(array, left, pivot - 1); }
    if (right > pivotIndex) { quickSort(array, pivot + 1, right); }
}



