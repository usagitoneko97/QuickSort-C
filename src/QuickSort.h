#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include <stdint.h>
void quickSort(int data[], int low, int high);
void swap(int *arr1, int *arr2);
int partition (int arr[], int low, int high);

#endif // _QUICKSORT_H
