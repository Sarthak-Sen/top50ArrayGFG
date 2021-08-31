#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
    public:

        int FirstNonRepeating(int arr[], int n) {
            unordered_map<int, int> mp;

            for(int i=0; i<n; i++){
                mp[arr[i]]++;
            }
            for(int i=0; i<n; i++){
                if(mp[arr[i]] == 1){
                    return arr[i];
                }
            }
            return -1;
        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n, ans;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    ans = s.FirstNonRepeating(arr, n);
    cout<<ans<<"\n";
    return 0;
}