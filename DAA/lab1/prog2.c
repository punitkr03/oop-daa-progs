//Binary search using recursion

#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    if(l>r) 
        return -1;
    int mid = (l+r)/2;
    if(arr[mid]==x) 
        return mid;
    if(arr[mid]>x) 
        return binarySearch(arr, l, mid-1, x);

    return binarySearch(arr, mid+1, r, x);
}

int main() {
    int arr[] = {45,32,43,43,54,98};
    int t = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = binarySearch(arr, 0, n-1, t);
    if (res==-1) 
        printf("Element not found\n");
    else 
        printf("Element found at index %d\n", res);

    return 0;
}