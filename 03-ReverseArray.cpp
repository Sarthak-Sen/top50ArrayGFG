#include<iostream>

using namespace std;


void Reverse(char arr[], int start, int end) {
    
    if(start>=end) {
        return;
    }

    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    Reverse(arr, start+1, end-1);


}

void input(char arr[], int n) {
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
}

void print(char arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int n;
    cin>>n;
    char arr[n];
    input(arr,n);
    Reverse(arr,0,n-1);
    print(arr, n);
    return 0;
}