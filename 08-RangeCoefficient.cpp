#include<iostream>

using namespace std;

void MaxMin(float arr[], int n) {
    float max = arr[0], min = arr[0], range, coeff;
    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    range = max-min;
    coeff=(max-min)/(max+min);
    cout<<range<<"\t"<<coeff<<"\n";
}

void input(float arr[], int n) {
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
}

int main() {

    int n;
    cin>>n;
    float arr[n];
    input(arr, n);
    MaxMin(arr, n);
    return 0;
}