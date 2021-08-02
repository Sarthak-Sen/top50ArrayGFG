#include<iostream>
using namespace std;

class Solution {
    public:

        int Count(int arr[], int n, int x) {
            int count = 0;
            for(int i=0; i<n; i++) {
                if(arr[i] == x) {
                    count++;
                }
            }
            return count;
        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n,x;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    cin>>x;
    cout<<s.Count(arr, n, x)<<"\n";
    return 0;
}