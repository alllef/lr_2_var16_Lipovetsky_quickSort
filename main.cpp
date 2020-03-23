#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void quickSort(vector<int> &array, unsigned int iLeft, unsigned int iRight);

unsigned int findMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight);

void print(vector<int> &array) {
    for (int item : array) {
        cout << setw(5) << item;
    }
    cout << endl;
}

void testQuickSort(vector<int> array) {
    print(array);
    quickSort(array, 0, array.size() - 1);
    print(array);

    cout << endl;
}

void testMedian(vector<int> array) {
    print(array);
    cout << setw(5) << array[findMedian(array, 0, array.size() - 1)] << endl;
}

void testMedianFactory() {

    testMedian({1, 2, 3});
    testMedian({3, 2, 1});
    testMedian({2, 3, 1});
    testMedian({5, 10, 2, 7, 8});
    testMedian({5, 10, 8, 7, 2});

}

void quickSortFactory() {
    //testQuickSort({1, 2, 3});
    //testQuickSort({3, 2, 1});
    testQuickSort({2, 3, 1});

    //testQuickSort({1, 74, 567, 854, 3, 2, 78, 45, 23, 24, 56, 28});
    //testQuickSort({5,24, 45, 456, 78, 67, 1020, 20, 34});

}

int main() {

    // testMedianFactory();
    quickSortFactory();

    return 0;
}

void swap(vector<int> &array, unsigned int iLeft, unsigned int iRight) {
    int iTemp;
    iTemp = array[iRight];
    array[iRight] = array[iLeft];
    array[iLeft] = iTemp;
}

void quickSort(vector<int> &array, unsigned int iLeft, unsigned int iRight) {

    const unsigned int leftPos = iLeft;
    const unsigned int rightPos = iRight;

    unsigned int iPivot = findMedian(array, iLeft, iRight);
    int pivot = array[iPivot];

    while (iLeft < iRight) {

        while (array[iLeft] <= pivot && iLeft < iRight) {
            iLeft++;
        }

        while (array[iRight] >= pivot && iLeft < iRight) {
            iRight--;
        }

        swap(array, iLeft, iRight);
        if(iLeft != iRight) iLeft++;
        if(iLeft != iRight)iRight--;
    }

    if (array[iRight] != pivot) swap(array, iPivot, iRight);

    if (iLeft < iPivot) { quickSort(array, leftPos, iPivot - 1); }
    if (iRight > iPivot) { quickSort(array, iPivot + 1, rightPos); }
}

unsigned int findMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight) {
    unsigned int median = (iLeft + iRight) / 2;

    if (array[iLeft] <= array[median] && array[median] <= array[iRight]) return median;
    if (array[iRight] <= array[median] && array[median] <= array[iLeft]) return median;

    if (array[median] <= array[iLeft] && array[iLeft] <= array[iRight]) return iLeft;
    if (array[iRight] <= array[iLeft] && array[iLeft] <= array[median]) return iLeft;

    if (array[median] <= array[iRight] && array[iRight] <= array[iLeft]) return iRight;
    if (array[iLeft] <= array[iRight] && array[iRight] <= array[median]) return iRight;

    abort();

}

