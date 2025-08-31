/*
Program 6 | Binary search: Given a list of n elements arranged in ascending order and a key, find whether
the given key exists in the list or not. If it exists, print its position in the list
*/

#include <stdio.h>

void binarySearch(int arr[], int s, int e, int key);

int main(){
    int n, key; 
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);
    int sortArr[n];
    input:
    printf("Enter the elements in the array in sorted manner: ");
    for(int i=0; i<n; i++){
        scanf("%d", &sortArr[i]);
        if((sortArr[i]<sortArr[i-1]) && (i>=1)){
            printf("Elements are not in sorted order.\n Try again!!.\n");
            goto input;
        }
    }
    printf("Enter the element to be found: ");
    scanf("%d", &key);

    binarySearch(sortArr, 0, n-1, key);
    return 0;
}

void binarySearch(int arr[], int s, int e, int key){
    while(s <= e){    
        int mid = s + ((e-s)/2);
        if(key == arr[mid]){
            printf("ELement  found at index %d", mid);
            return ;
        }else if(key < arr[mid]){
            e = mid -1;
        }else{
            s = mid +1;
        }
    }
    printf("key %d is not present in the sorted array.", key);
    return ;
}
