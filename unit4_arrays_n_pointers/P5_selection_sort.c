/*
Program 5 | Selection Sort: Given a list of n elements. Arrange them in an ascending order

Principle:
Selection Sort works on the principle of sorting by selection. The given unsorted list is initially divided into two
lists—the sorted list containing no element and the unsorted list containing all the elements. For example, the
given unsorted list
Selection Sort selects the minimum element from the unsorted list and exchanges it with the first element in the
unsorted list. 
*/

#include <stdio.h>

int main(){
    int array[] = {234,43,23,5,23,54,23,87,90,234};
    int length = sizeof(array)/sizeof(array[0]);

    int si = 0, min, minIdx;
    while(si < length){
        min = array[si];
        minIdx = si;
        for(int ui = si; ui < length; ui++){
            if(min > array[ui]){
                min = array[ui];
                minIdx = ui;
            }
        }
        if(minIdx != si){
            array[minIdx] = array[si];
            array[si] = min;
            si++;
        }
    }

    printf("Sorted array is :");
    for(int j=0; j<length; j++){
        printf("%d ", array[j]);
    }

}