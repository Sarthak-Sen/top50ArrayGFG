#include<iostream>
using namespace std;

class Solution {
    public:

        void NegativeOneSide(int arr[], int left, int right) {
            
            while(left<=right){
                if(arr[left]<0 && arr[right]<0) {
                    left++;
                }
                else if(arr[left]>0 && arr[right]>0) {
                    right--;
                }
                else if(arr[left]>0 && arr[right]<0) {
                    swap(arr[left++], arr[right--]);
                }
                else {
                    left++;
                    right--;
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
    s.NegativeOneSide(arr, 0, n-1);
    s.print(arr, n);
    return 0;
}