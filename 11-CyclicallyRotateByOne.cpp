#include<iostream>
using namespace std;

class Solution {
    public:

        void Rotate(int arr[], int n) {
            
            int x = arr[n-1];
            for(int i=n-1; i>0; i--){
                arr[i] = arr[i-1];
            }
            arr[0] = x;
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
    s.Rotate(arr, n);
    s.print(arr, n);
    return 0;
}