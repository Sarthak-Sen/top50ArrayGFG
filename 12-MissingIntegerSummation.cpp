#include<iostream>
using namespace std;

class Solution {
    public:

        int Search(int arr[], int n) {
            
            int total=1, i;
            for(i=2; i<=(n+1); i++){
                total += i;
                total -= arr[i-2];
            }
            return total;
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