#include<iostream>
#include <unordered_map>
using namespace std;

class Solution {
    public:

        int Pairs(int arr[], int n, int sum) {

            unordered_map<int, int> m;

            for(int i=0; i<n; i++){
                m[arr[i]]++;
            }

            int count = 0;

            for(int i=0; i<n; i++){
                count += m[sum-arr[i]];

                if(sum-arr[i] == arr[i]){
                    count--;
                }
            }

            return count/2;
        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n,k;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    cin>>k;
    cout<<s.Pairs(arr, n, k)<<"\n";
    return 0;
}