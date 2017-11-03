#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include <stdint.h>
void quickSort(uint8_t data[], int low, int high);
void swap(uint8_t *arr1, uint8_t *arr2);
int partition (uint8_t arr[], int low, int high);

#endif // _QUICKSORT_H
