//Implement selection sort.
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min;
    printf("Selection sort : \n");
    for(i=0; i<n-1; i++) {
        min = i;
        for(j=i+1; j<n; j++) {
            if(arr[j]<arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void print (int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 13, 9, 2, 12, 7, 64, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array : \n");
    print(arr, n);

    return 0;
}