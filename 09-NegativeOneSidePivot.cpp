#include<iostream>
using namespace std;

class Solution {
    public:

        void NegativeOneSide(int arr[], int n) {
            
            int j = 0, pivot=0;
            for(int i=0; i<n; i++) {
                if(arr[i]<pivot){
                    if(i!=j) {
                        swap(arr[i], arr[j]);
                    }
                    j++;
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
    s.NegativeOneSide(arr, n);
    s.print(arr, n);
    return 0;
}