#include <stdio.h>
#include "env.h"

EM_PORT_API(int) show_me_the_answer(){
    return 42;
}

EM_PORT_API(float) add(float a, float b) {
    return a+b;
}