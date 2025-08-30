/*
Program 7 | Given two sorted one-dimensional arrays A and B of size m and n, respectively. Merge them
into a single-sorted array C that contains every element from arrays A and B in ascending order

*/


#include <stdio.h>


int main(){
    int A[] = {5, 23, 23, 23, 43, 54, 87, 90, 234, 234};
    int B[] = {9,13,16,23,34,56,68};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);
    int C[m+n];
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k] = A[i];
            i++;
        }else{
            C[k]=B[j];
            j++;
        }
        k++;
    }
    while(i < m){
       C[k] = A[i];
        i++;
        k++;
    }

    while(j < n){
       C[k] = B[j];
        j++;
        k++;
    }

    printf("Sorted array is :");
    for(int k=0; k<(m+n); k++){
        printf("%d ", C[k]);
    }

    return 0;
}
