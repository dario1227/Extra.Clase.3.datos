//
// Created by kenneth on 22/04/18.
//

#include <iostream>
#include "binary_seach.h"
int binary_seach::binarySearch(int arrr[],int search,int size) {
    std::cout<< sizeof(arrr)/sizeof(arrr[0])<<std::endl;
    return binarySearch(arrr,search,0,size-1 );



}
int binary_seach::binarySearch(int arr[], int value, int left, int right) {

    while (left <= right) {

        int middle = (left + right) / 2;

        if (arr[middle] == value)

            return middle;

        else if (arr[middle] > value)

            right = middle - 1;

        else

            left = middle + 1;

    }

    return -1;

}