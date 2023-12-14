#include <stdio.h>
#include <stdint.h>
#include "hpm.h"

#define ARRAY_SIZE_4MB  (4 * 1024 * 1024)
#define ARRAY_SIZE_8MB  (8 * 1024 * 1024)
#define ARRAY_SIZE_16MB (16 * 1024 * 1024)
#define ARRAY_SIZE_32MB (32 * 1024 * 1024)
#define ARRAY_SIZE_64MB (64 * 1024 * 1024)

#define ITERATIONS 100000

void read_bandwidth(uint8_t *array, size_t array_size) {
    uint8_t value = 0;
    size_t i, j;
    for (i = 0; i < ITERATIONS; ++i) {
        for (j = 0; j < array_size; ++j) {
            value += array[j];
        }
    }
}

int main() {
    struct hpm hpm_data;
    // Initialize the time measurement

    // Arrays for different sizes
    uint8_t array_4MB[ARRAY_SIZE_4MB];
    uint8_t array_8MB[ARRAY_SIZE_8MB];
    uint8_t array_16MB[ARRAY_SIZE_16MB];
    uint8_t array_32MB[ARRAY_SIZE_32MB];
    uint8_t array_64MB[ARRAY_SIZE_64MB];

    printf("Measuring read for different sizes:\n");

    hpm_init(); // Start measurements for each size
    printf("\n4MB:\n");
    read_bandwidth(array_4MB, ARRAY_SIZE_4MB);
    hpm_print();

    printf("\n8MB:\n");
    read_bandwidth(array_8MB, ARRAY_SIZE_8MB);
    hpm_print();

    printf("\n16MB:\n");
    read_bandwidth(array_16MB, ARRAY_SIZE_16MB);
    hpm_print();

    printf("\n32MB:\n");
    read_bandwidth(array_32MB, ARRAY_SIZE_32MB);
    hpm_print();

    printf("\n64MB:\n");
    read_bandwidth(array_64MB, ARRAY_SIZE_64MB);
    hpm_print();

    return 0;
}
