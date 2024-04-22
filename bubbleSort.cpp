#include<iostream>
using namespace std;

void printSortedArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[] , int n){

    for(int i=1 ; i<n; i++){

        for(int j=0 ; j<n-1 ; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }

        }

    }

}

int main(){

    int arr[6]={7 , 2 , 4, 9 ,3 ,1};

    bubbleSort(arr , 6);

    printSortedArray(arr, 6);



    return 0;
}

