#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void quickSort(vector<int> &array, unsigned int iLeft, unsigned int iRight);
void quickSortWithMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight);
unsigned int findMedian(vector<int> &array, unsigned int iLeft, unsigned int iRight);
void print(vector<int> &array);
void testQuickSort(vector<int> array);
void testMedian(vector<int> array);
void testMedianFactory();

void print(vector<int> &array) {
    for (int item : array) {
        cout << setw(5) << item;
    }
    cout << endl;
}

void testQuickSort(vector<int> array) {
    print(array);
    quickSortWithMedian(array, 0, array.size() - 1);
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
    testQuickSort({1, 2, 3});
    testQuickSort({3, 2, 1});
    testQuickSort({2, 3, 1});
    testQuickSort({5, 3, 6, 10, 11, 13, 17});
    testQuickSort({-2, 37, 44, 56, 22, 34});

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

    int pivot;
    pivot = array[iLeft];
    while (iLeft < iRight) // пока границы не сомкнутся
    {
        while ((array[iRight] >= pivot) && (iLeft < iRight))
            iRight--; // сдвигаем правую границу пока элемент [right] больше [pivot]
        if (iLeft != iRight) // если границы не сомкнулись
        {
            array[iLeft] = array[iRight]; // перемещаем элемент [right] на место разрешающего
            iLeft++; // сдвигаем левую границу вправо
        }
        while ((array[iLeft] <= pivot) && (iLeft < iRight))
            iLeft++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
        if (iLeft != iRight) // если границы не сомкнулись
        {
            array[iRight] = array[iLeft]; // перемещаем элемент [left] на место [right]
            iRight--; // сдвигаем правую границу вправо
        }
    }
    array[iLeft] = pivot;
    pivot = iLeft;
    iLeft = leftPos;
    iRight = rightPos;
    if (iLeft < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
        quickSort(array, iLeft, pivot - 1);
    if (iRight > pivot)
        quickSort(array, pivot + 1, iRight);
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

void initializeArray(vector<int> &array,){
    for (int i = 0; i<SIZE; i++)
        a[i] = rand() % 201 - 100;
}