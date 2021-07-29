#include<iostream>

using namespace std;

void MaxMin(int arr[], int n) {
    int max = arr[0], min = arr[0];
    
    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout<<min<<" "<<max<<"\n";
}

void input(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
}

int main() {

    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    MaxMin(arr, n);
    return 0;
}