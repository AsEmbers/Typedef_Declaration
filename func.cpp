//
// Created by shy on 2022/10/26.
//
#include "func.h"

int_class _calculation_int_max_value(void){
    int_class integer;
    while (++integer.max_value>0);
    int max_value=integer.max_value-=1;
    integer.digit_capacity++;
    while (max_value/=10){
        integer.digit_capacity++;
    }
    return integer;
}

