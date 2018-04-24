//
// Created by dario1227 on 21/04/18.
//

#include <iostream>
#include "searches/binary_seach.h"
#include "searches/generator.h"
#include "searches/busqueda_secuencial.h"
#include <chrono>
int array20[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
int array30[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
int array40[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39};
int array50[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};
int array60[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59};
int array80[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89};
void time_secuencial(){
    auto start = std::chrono::steady_clock::now();
   std::cout<< busqueda_secuencial::search(array80, 80,100)<<std::endl;
    auto end = std::chrono::steady_clock::now();
    auto dif = end - start;
    //__________________________________________________________________________________________________________-
    std::cout << " Tiempo var al inicio en 20 : " << std::chrono::duration<double, std::milli>(dif).count()
              << std::endl;
}
void time_binary() {
    auto start = std::chrono::steady_clock::now();
   binary_seach::binarySearch(array80, 100,40);
    auto end = std::chrono::steady_clock::now();
    auto dif = end - start;
    //__________________________________________________________________________________________________________-
    std::cout << " Tiempo var al inicio en 20 : " << std::chrono::duration<double, std::milli>(dif).count()
              << std::endl;
}


int main() {

    time_secuencial();
    return 0;
}