//
// Created by shy on 2022/10/26.
//

#ifndef TYPEDEF_DECLARATION_FUNC_H
#define TYPEDEF_DECLARATION_FUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int INTEGER;
typedef struct _int_class{
    INTEGER max_value=0;
    INTEGER digit_capacity=0;
}int_class,*p_int_class;

int_class _calculation_int_max_value(void);

#endif //TYPEDEF_DECLARATION_FUNC_H
