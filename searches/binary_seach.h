//
// Created by kenneth on 22/04/18.
//

#ifndef EXTRA_CLASE_3_DATOS_BINARY_SEACH_H
#define EXTRA_CLASE_3_DATOS_BINARY_SEACH_H


class binary_seach {
private:
static int binarySearch_aux(int arr[],int l,int r ,int x);

public:
static int binarySearch(int arrr[],int, int);

    static  int binarySearch(int *arr, int value, int left, int right);
};


#endif //EXTRA_CLASE_3_DATOS_BINARY_SEACH_H
