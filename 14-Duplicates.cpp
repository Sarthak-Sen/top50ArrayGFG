#include<iostream>
using namespace std;

class Solution {
    public:

        void Duplicates(int arr[], int n) {

            for(int i=0; i<n; i++){    
                arr[arr[i]%n] = arr[arr[i]%n] + n;
            }

            for(int i=0; i<n; i++) {
                if(arr[i] > (n*2)){
                    cout<<i<<" ";
                }
            }
            cout<<"\n";
        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    s.Duplicates(arr, n);
    return 0;
}