#include <stdio.h>
#include<time.h>
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[], int low, int high)
{
	
	int pivot = arr[high];
	
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {

		if (arr[j] < pivot) {

			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
	if (low < high) {

		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{	
	
	double time;
	clock_t start,end;
	int arr[] = { 4, 2, 3, 5, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	start=clock();
	quickSort(arr, 0, N - 1);
	end=clock();
	time=(double)(end-start)/CLOCKS_PER_SEC;
	
	printf("Sorted array: \n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
		printf("Time taken: %lf\n",time);
	return 0;
}
