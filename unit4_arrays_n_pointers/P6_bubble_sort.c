/*
Program 6 | Bubble Sort: Given a list of n elements. Arrange them in an ascending order

‘Bubbles (or lighter elements) rise up in water and heavier elements sink’
The given unsorted list is initially divided into two lists—the sorted list containing no element and the unsorted
list containing all the elements. For example, 
it compares two adjcent elements and put the highest(heaviest) element at the right(bottom)
*/
#include <stdio.h>


int main(){
    int array[] = {234,43,23,5,23,54,23,87,90,234};
    int length = sizeof(array)/sizeof(array[0]);
    int l = length;
    while(l > 0){
        int swapped = 0;
        for(int i=0; i<l-1; i++){
            if(array[i]>array[i+1]){
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                swapped = 1;
            }
        }
        if(!swapped) break;
        l--;
    }

    printf("Sorted array is :");
    for(int j=0; j<length; j++){
        printf("%d ", array[j]);
    }

}