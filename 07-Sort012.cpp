#include<iostream>

using namespace std;

class Solution{

public:

void Sort012(int arr[], int n) {

    int low=0, mid=0, high=n-1;

    while(mid<=high){
        switch(arr[mid]) {
            case 0: 
                swap(arr[low++], arr[mid++]);
                break;
            case 1: 
                mid++;
                break;
            case 2: 
                swap(arr[mid], arr[high--]);
                break;
        }
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

};


int main() {

    int n;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    s.Sort012(arr, n);
    s.print(arr, n);
    return 0;
}