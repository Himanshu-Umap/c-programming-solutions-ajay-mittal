/*
Program 5 | Quick Sort: Given a list of n elements, arrange them in ascending order using Quick sort
*/

#include <stdio.h>

int partition(int arr[], int s, int e);
void quickSort(int arr[], int s, int e);
void swap(int* a, int* b);

int main(){
    int n; 
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n-1);

    printf("Sorted array is :");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

int partition(int arr[], int s, int e){
    int partI = s;
    for(int i=s; i<e; i++){
        // if(partI != i){
            if(arr[i] < arr[e]){
                swap(&arr[i], &arr[partI]);
                partI++;
            }
        // }
    }
    swap(&arr[partI], &arr[e]);
    // partI++;

    return partI;
}


void quickSort(int arr[], int s, int e){
    
    if(s < e){
        int partI = partition(arr, s, e);
        quickSort(arr, s, partI-1);
        quickSort(arr, partI+1, e);
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}