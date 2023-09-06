// test_app.c

#include <stdio.h>
#include "simple_math.h"

int main() {
    printf("Add: %ld\n", add(1000, 2000));
    printf("Sub: %d\n", sub(1000, 2000));
    printf("Mul: %ld\n", mul(1000, 2000));
    printf("Sqrt: %d\n", sqrt_64(1440));
    return 0;
}
