#include<iostream>
using namespace std;

void printSortedArray(int arr[], int n){

    for( int i=0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int arr[] , int n){

    for(int i=0 ; i<n ; i++){
        int temp = arr[i];
        int j=i-1;

        for( ; j>=0 ; j--){

            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

}
    

int main(){

    int arr[5]={5 , 4 , 3, 2, 1};

    insertionSort(arr,5);

    printSortedArray(arr,5);



    return 0;
}
