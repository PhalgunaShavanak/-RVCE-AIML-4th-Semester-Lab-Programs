#include <stdio.h>
#include <time.h>
#include <math.h>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

 
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

 
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

   
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int size) {
    if (size < 2) {
        return;  
    }

    int mid = size/2;
    int left[mid];
    int right[size-mid];

   
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

   
    mergeSort(left, mid);
    mergeSort(right, size - mid);

   
    merge(arr, left, mid, right, size - mid);
}


void printArray(int arr[], int size) {
    for(int i=0; i<size; i++)
    {
      printf("%d ", arr[i]);
     
    }
printf("\n");}


int main() {
    printf("Enter Size ");
    int x;
    scanf("%d", &x);
    int arr[x];
    for(int i=0; i<x; i++)
    {
      arr[i]=rand()%100;
    }
    int size = sizeof(arr) / sizeof(arr[0]);

   
   
    int a1[x];
    //asc
    mergeSort(arr, size);
   
    
     
   
    clock_t s=clock();
    mergeSort(arr, size);
    clock_t e=clock();
 
    printf("Sorted array: ");
    printArray(arr, size);
    double time=(double)(e-s)/CLOCKS_PER_SEC;
    printf("\nTime taken = %f", time);
    return 0;
}
