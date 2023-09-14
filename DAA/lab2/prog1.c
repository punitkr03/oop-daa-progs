//WAP to implement bubble sort
#include<stdio.h>

void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int i, j , temp;
    printf("Bubble sort : \n");
    for (i = 0; i < (n-1); i++) {
        for( j = 0; j < (n-1); j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    display(arr, n);
}

int main() {
    int n = 7;
    int arr[] = { 13, 9, 2, 12, 7, 64, 25};
    bubbleSort(arr, n);
    return 0;
}