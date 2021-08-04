#include<iostream>
using namespace std;

class Solution {
    public:

        void Sum(int arr[], int n) {
            
            int current=arr[0], maximum=arr[0];

            for(int i=1; i<n; i++){
                current = max(arr[i], (current+arr[i]));
                maximum = max(current, maximum);
            }
            cout<<maximum<<"\n";
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
    s.Sum(arr, n);
    return 0;
}