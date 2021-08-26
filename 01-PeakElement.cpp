#include<iostream>
using namespace std;

class Solution {
    
    public:

        int findPeak(int arr[], int low, int high, int n){

            int mid = low + (high-low) / 2;

            if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <=arr[mid])){
                return mid;
            }

            else if(mid > 0 && arr[mid] < arr[mid-1]){
                return findPeak(arr, low, (mid-1), n);
            }

            else{
                return findPeak(arr, (mid+1), high, n);
            }
        }

        int Peak(int arr[], int n) {
            
            return findPeak(arr, 0, n-1, n);
        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n, index;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    index = s.Peak(arr, n);
    cout<<arr[index]<<"\n";
    return 0;
}