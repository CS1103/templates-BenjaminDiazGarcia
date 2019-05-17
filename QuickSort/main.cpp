#include <iostream>
#include <vector>
#include "QuickSort2.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#ifndef CATCH_CONFIG_MAIN

int main() {
    int array1[3] = {2, 7, 3};
    std::vector <int> array = {2, 7, 3};

    QuickSort(array, 0, 3);
    QuickSort(array1, 0, 3);

    for (int i = 0; i < 3; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << array1[i] << " ";
    }

    return 0;
}

#endif