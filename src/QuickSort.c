#include "QuickSort.h"

/**
 * sorting a given data array
 * @param data data array
 * @param low  starting index number
 * @param high ending index number
 */
void quickSort(uint8_t data[], int low, int high){
  int pivotIndex;
  //stopping condition is when there is only 1 data after partition
  if(low < high){
    pivotIndex = partition(data, low, high);
    quickSort(data, low, pivotIndex-1);
    quickSort(data, pivotIndex+1, high);
  }
}

/**
 * partition data into two parts with last element as pivot
 * @param  arr    data array
 * @param  low    starting index to partition
 * @param  high   ending index to partition
 * @return        index of pivot element
 */
int partition (uint8_t arr[], int low, int high){
  int i = low-1;
  int j=0;
  //pivot taken is the last element
  uint8_t pivot = arr[high];
  for(j = low; j<high ; j++){
    if(arr[j] <= pivot){
      swap(&arr[++i], &arr[j]);
    }
  }
  //placing the pivot
  swap(&arr[i+1], &arr[high]);
  //return index of pivot
  return i+1;
}

/**
 * swap 2 element in a data array
 * @param arr1 pointer to first data to swap
 * @param arr2 pointer to second data to swap
 */
void swap(uint8_t *arr1, uint8_t *arr2){
  uint8_t temp = *arr1;
  *arr1 = *arr2;
  *arr2 = temp;
}
