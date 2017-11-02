#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include <stdint.h>
void swap(uint8_t *arr1, uint8_t *arr2);
void partition (uint8_t arr[], uint8_t low, uint8_t high);
void quickSort(uint8_t data[], uint8_t low, uint8_t high);

#endif // _QUICKSORT_H
