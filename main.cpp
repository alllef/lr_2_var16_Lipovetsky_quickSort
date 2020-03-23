#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void quickSort(vector<int> &array, unsigned int iLeft, unsigned int iRight);

void quickSortWithMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight);

unsigned int findMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight);

void print(vector<int> &array);

void testQuickSort(vector<int> array);

void initializeArray(vector<int> &array);

int main() {
    vector<int> array(100);
    testQuickSort(array);


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

    int pivot;
    pivot = array[iLeft];
    while (iLeft < iRight) {
        while ((array[iRight] >= pivot) && (iLeft < iRight))
            iRight--;
        if (iLeft != iRight) {
            array[iLeft] = array[iRight];
            iLeft++;
        }
        while ((array[iLeft] <= pivot) && (iLeft < iRight))
            iLeft++;
        if (iLeft != iRight) {
            array[iRight] = array[iLeft];
            iRight--;
        }
    }
    array[iLeft] = pivot;
    unsigned int iPivot = iLeft;
    iLeft = leftPos;
    iRight = rightPos;
    if (iLeft < iPivot)
        quickSort(array, iLeft, iPivot - 1);
    if (iRight > iPivot)
        quickSort(array, iPivot + 1, iRight);
}

void quickSortWithMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight) {
    unsigned int iPivot = findMedian(array, iLeft, iRight);

    swap(array, iPivot, iLeft);

    quickSort(array, iLeft, iRight);
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

void initializeArray(vector<int> &array) {
    for (int & i : array)
        i = rand() % 201 - 100; // NOLINT(cert-msc30-c,cert-msc50-cpp)
}

void print(vector<int> &array) {
    for (int item = 0; item < array.size(); item++) {
        if (item % 10 == 0)cout << endl;
        cout << setw(5) << array[item];
    }
    cout << endl;
}

void testQuickSort(vector<int> array) {
    initializeArray(array);
    print(array);
    quickSortWithMedian(array, 0, array.size() - 1);
    print(array);

    cout << endl;
}





