/*
Program 4 | Merge Sort: Given a list of n elements, arrange them in an ascending order using Merge Sort
*/

    #include <stdio.h>

    void mergeSort(int arr[], int s, int e);
    void merge(int arr[], int s, int mid, int e);

    int main(){
        int n; 
        printf("Enter the no. of elements in the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements in the array: ");
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int s = 0, e = n-1;
        mergeSort(arr, s, e);
        printf("Sorted array is :");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
    }

    void mergeSort(int arr[], int s, int e){

        if(s < e){
            int mid = s + ((e-s)/2);
            mergeSort(arr, s, mid);
            mergeSort(arr, mid+1, e);
            merge(arr, s, mid, e);
        }
    }

    void merge(int arr[], int s, int mid, int e){
        int i = s, j=mid+1 ,k=0;
        int temp[e-s+1];
        while(i<=mid && j<=e){
            if(arr[i] < arr[j]){
                temp[k] = arr[i];
                i++;
            }else{
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        while(i<=mid){
            temp[k] = arr[i];
            i++;
            k++;
        }
        while(j<=e){
            temp[k] = arr[j];
            j++;
            k++;
        }
        for(int l=s; l<=e; l++){
            arr[l] = temp[l-s];
        }
    }