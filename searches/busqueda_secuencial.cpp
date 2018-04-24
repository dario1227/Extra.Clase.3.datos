//
// Created by kenneth on 22/04/18.
//

#include "busqueda_secuencial.h"
bool busqueda_secuencial::search(int *var, int largo, int buscar) {
    int index =0;
    while(index<largo){
        if(var[index]==buscar){
            return true;
        }
        index++;
    }
    return false;
}