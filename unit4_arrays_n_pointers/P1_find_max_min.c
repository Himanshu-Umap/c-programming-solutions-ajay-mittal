/*
Program 1 | Maximum-Minimum: Find the maximum and minimum element in a set of n elements
*/

#include <stdio.h>

int main(){
    int n, min, max;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d is the minimum and %d is the maximum element in the set.", min, max);
}