#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:

        int search(unordered_set<int>S, int K){

            int Index = 0;
 
            for (auto u : S) {
 
                if (u == K){

                    return Index;
                }
        
                Index++;
                }
                return -1;       
            }

        bool SumZero(int arr[], int n) {
            int sum=0;
            
            unordered_set<int> nums;
            for(int i=0; i<n; i++){
                
                sum+=arr[i];
                if(arr[i]==0)
                {
                    cout<<"Index are: "<<i<<" and "<<i;
                    return true;
                }
                if(sum==0){
                    cout<<"Index are: 0 and "<<i<<"\n";
                    return true;
                }
                if(nums.find(sum) != nums.end()){
                    cout<<"Index are: "<<search(nums, sum)<<" and "<<i<<"\n";
                    return true;
                }
                nums.insert(sum);
            }
            return false;
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
    ans = s.SumZero(arr, n);
    if(ans == false) {
        cout<<-1<<"\n";
    }
    return 0;
}