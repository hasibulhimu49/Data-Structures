#include <iostream>

using namespace std;

int partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l;
    int j = h;

    while (i < j) {
        while (A[i] <= pivot)
            i++;

        while (A[j] > pivot)
            j--;

        if (i < j)
            swap(A[i], A[j]);
    }

    swap(A[l], A[j]);
    return j;
}

void quickSort(int A[], int l, int h) {
    if (l < h) {
        int loc = partition(A, l, h);
        quickSort(A, l, loc - 1);
        quickSort(A, loc + 1, h);
    }
}

int main() {
    int A[] = {9, 8, 10, 7, 15, 12, 11, 5, 6, 14};
    int n = sizeof(A) / sizeof(A[0]);

    quickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
