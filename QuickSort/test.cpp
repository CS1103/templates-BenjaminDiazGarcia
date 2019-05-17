#include "QuickSort2.h"
#include "catch.hpp"

SCENARIO("QuickSort"){
    GIVEN("Un array con 3 elementos desordenados"){
        WHEN("Se le aplica el ordenamiento al array"){
            THEN("El array se ordena de mayor a menor"){
                int array[3] = {3, 1, 2};
                QuickSort(array, 0, 3);
                for (int i = 1; i < 4; i++)
                    REQUIRE(array[i] == i);
            }
        }
    }
}