#include "QuickSort.h"

/**
 * sorting a given data array
 * @param data data array
 * @param low  starting index number to sort
 * @param high ending index number to sort
 */
void quickSort(int data[], int low, int high){
  int pivotIndex;
  //stopping condition is when there is only 1 data after partition
  if(low < high){
    //seperate array into 2 parts
    pivotIndex = partition(data, low, high);
    //taking the array of element that are less than pivot
    quickSort(data, low, pivotIndex - 1);
    //taking the array of element that are Higher than pivot
    quickSort(data, pivotIndex + 1, high);
  }
}

/**
 * partition data into two parts with last element as pivot
 * @param  arr    data array
 * @param  low    starting index to partition
 * @param  high   ending index to partition
 * @return        index of pivot element
 */
int partition (int arr[], int low, int high){
  //j is moving index to iterate through arr[]
  int j;
  //i is index that fills the element(s) smaller than pivot
  int i = low;
  //pivot taken is the last element
  int pivot = arr[high];

  //iterate through arr[]
  for(j = low; j<high ; j++){
    //swap element that is less than pivot with element with i index
    if(arr[j] <= pivot){
      swap(&arr[i++], &arr[j]);
    }
  }
  //placing the pivot
  swap(&arr[i], &arr[high]);
  //return index of pivot
  return i;
}

/**
 * swap 2 element in a data array
 * @param arr1 pointer to first data to swap
 * @param arr2 pointer to second data to swap
 */
void swap(int *arr1, int *arr2){
  int temp = *arr1;
  *arr1 = *arr2;
  *arr2 = temp;
}
