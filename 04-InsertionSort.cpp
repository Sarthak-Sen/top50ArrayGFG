#include<iostream>

using namespace std;


void InsertionSort(int arr[], int n) {
    
    int i, j, key;
    for(i=1; i<n; i++) {

        key = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void input(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    InsertionSort(arr,n);
    print(arr, n);
    return 0;
}