#include <stdio.h>
#include "env.h"

EM_PORT_API(void) print_int(int a) {
    printf("C{print_int() a:%d}\n",a);
}

EM_PORT_API(void) print_float(float a) {
    printf("C{print_float() a:%f}\n",a);
}

EM_PORT_API(void) print_double(double a) {
    printf("C{print_double() a:%1f}\n",a);
}