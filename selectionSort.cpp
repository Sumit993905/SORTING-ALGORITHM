#include<iostream>
using namespace std ;

void printSortedArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

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

    selectionSort(arr,5);
    
    printSortedArray(arr,5);

    return 0;
}