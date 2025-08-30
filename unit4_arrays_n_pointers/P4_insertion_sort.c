/*
Program 4 | Insertion Sort: Given list of n elements. Arrange them in an ascending order
*/


#include <stdio.h>

int main(){
    int array[] = {234,43,23,1,5,23,54,23,87,90,234};
    int length = sizeof(array)/sizeof(array[0]);
    int ui = 1;
    
    // compare unsorted element index with the array length
    while(ui < length){
        int temp = array[ui]; 
        int flag = 0;
        // used the same loop to compare the unsorted element with sorted element to find the index and place them in sorted array
        for(int i=ui-1; i >= 0; i--){
                if(temp > array[i]){
                    // array[i+1] = array[i];
                    array[i+1]= temp;
                    flag = 1;
                    break;
                }else{
                    array[i+1] = array[i];
                }
        }
        if (flag == 0){
            array[0] = temp;
        }
        ui++;
    };

    printf("Sorted array is :");
    for(int j=0; j<length; j++){
        printf("%d ", array[j]);
    }

}





/*

My 1st code using function and separate for loop 


#include <stdio.h>

// compare sorted array with the unsorted element to find the insertion index in sorted array
int compare(int arr[], int ui){
    int i = 0; 
    while(arr[i] < arr[ui]){
        i++;
    }
    return i;
}

int main(){
    int array[] = {234,43,23,1,5,23,54,23,87,90,234};
    int length = sizeof(array)/sizeof(array[0]);
    int ui = 1;
    
    // compare unsorted element index with the array length
    while(ui < length){
        int temp = array[ui]; 
        int pi = compare(array , ui);
        // shift the array forward to create space to insert the unsorted element in the sorted array
        for(int i=ui; i > pi; i--){
                array[i] = array[i-1];
        }
        array[pi] = temp;
        ui++;
    };

    printf("Sorted array is :");
    for(int j=0; j<length; j++){
        printf("%d ", array[j]);
    }

}

Check this code if it is correct and the optimised version or not 


*/