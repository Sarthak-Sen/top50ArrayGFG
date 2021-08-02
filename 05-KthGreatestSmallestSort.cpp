#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public:

        void GreatestSmallest(int arr[], int n, int k) {
            
            sort(arr, arr+n);

            cout<<arr[k-1]<<" "<<arr[n-k]<<"\n";

        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n, k;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    cin>>k;
    s.GreatestSmallest(arr, n, k);
    return 0;
}