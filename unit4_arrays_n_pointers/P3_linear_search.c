/*
Program 3 | Linear Search: Given a list of n elements and a key. Find whether the given key exists in the
list or not. If it exists, print its position in the list
*/


#include <stdio.h>

int main(){
    int n, key, fnd = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d", &key);  

    for(int i = 0; i < n ; i++){
        if(key == arr[i]){
            printf("Element %d found at the index %d", key, i);
            fnd++;
        }
    }
    if(fnd == 0){
        printf("Element is not found in the array.");
    }
    return 0;
}