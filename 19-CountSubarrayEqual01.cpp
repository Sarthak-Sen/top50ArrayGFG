#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
    public:

        int Count(int arr[], int n){
            int sum = 0, count = 0;
            unordered_map<int, int> mp;
            for(int i=0; i<n; i++){
                if(arr[i] == 0){
                    arr[i] = -1;
                }
                sum += arr[i];

                if(sum == 0){
                    count++;
                }

                if(mp[sum]){ 
                    count += mp[sum]; //Possible Combinations = Number of times the prefix sum appeared before this occurrance
                }

                if(mp[sum] == 0){
                    mp[sum] = 1; //Initialization
                }
                else{
                    mp[sum]++; //Increment
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
    int n, ans;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    ans = s.Count(arr, n);
    cout<<ans<<"\n";
    return 0;
}
