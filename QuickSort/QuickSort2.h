#ifndef QUICKSORT_QUICKSORT2_H
#define QUICKSORT_QUICKSORT2_H

#include <vector>

template <typename T>
    void QuickSort(T arr[], T inicio, T final) {
        T i = inicio;
        T j = final;
        T pivot = arr[(inicio + final) / 2];

        while (i <= j) {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        if (inicio < j)
            QuickSort(arr, inicio, j);
        if (i < final)
            QuickSort(arr, i, final);
    }

template <typename T>
void QuickSort( std::vector <T>& arr, T inicio, T final) {
    T i = inicio;
    T j = final;
    T pivot = arr[(inicio + final) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (inicio < j)
        QuickSort(arr, inicio, j);
    if (i < final)
        QuickSort(arr, i, final);
}
#endif