#include "func.h"

int main() {
    int_class integer = _calculation_int_max_value();
    printf("int max value=%d\n",integer.max_value);
    printf("int digit capacity=%d\n",integer.digit_capacity);
    return 0;
}
