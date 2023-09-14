//Implement Insertion sort.
#include <stdio.h>

void insertion(int arr[], int n) {
    int i, j, key;
    printf("Insertion sort : \n");
    for(i=1; i<n; i++) {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertion(arr, n);
    printf("Sorted array : \n");
    print(arr, n);

    return 0;
}