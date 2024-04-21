#include<iostream>
using namespace std ;

// only for printing an array 
void printSortedArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// sorting Algorithm
void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){

        int minIndex = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    int arr[5]={12,17,8,4,25};

    selectionSort(arr,5);  //calling Sorting Algorithm 
    
    printSortedArray(arr,5); // Here calling for Printing an Sorted Array

    return 0;
}