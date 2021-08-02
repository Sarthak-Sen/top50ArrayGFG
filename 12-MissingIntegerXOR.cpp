#include<iostream>
using namespace std;

class Solution {
    public:

        int Search(int arr[], int n) {
            
            int x1=arr[0], x2=1;

            for(int i=1; i<n; i++){
                x1 = x1^arr[i];
            }
            for(int i=2; i<=n+1; i++){
                x2 = x2^i;
            }
            return (x1^x2);
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
    cout<<s.Search(arr, n)<<"\n";
    return 0;
}