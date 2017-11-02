#include "QuickSort.h"
void quickSort(uint8_t *data, uint8_t low, uint8_t high){

}

void partition (uint8_t arr[], uint8_t low, uint8_t high){
  int i = low-1;
  int j=0;
  //pivot taken is the last element
  uint8_t pivot = arr[high];
  for(j = 0; j<high ; j++){
    if(arr[j] <= pivot){
      swap(&arr[++i], &arr[j]);
    }
  }
  //placing the pivot
  swap(&arr[i+1], &arr[high]);
}

void swap(uint8_t *arr1, uint8_t *arr2){
  uint8_t temp = *arr1;
  *arr1 = *arr2;
  *arr2 = temp;
}
