//Linear serach using recursion
#include<stdio.h>

int linearSearch(int arr[], int l, int r, int x) {
    if(l>r) 
        return -1;
    if(arr[l]==x) 
        return l;
    if(arr[r]==x) 
        return r;
    return linearSearch(arr, l+1, r-1, x);
}

int main() {
    int n = 7;
    int t = 13;
    int arr[] = {12, 13, 14, 15, 16, 17, 18};
    int res = linearSearch(arr, 0, n-1, t);
    if(res==-1) 
        printf("Element not found\n");
    else 
        printf("Element found at index %d\n", res);

    return 0;
}