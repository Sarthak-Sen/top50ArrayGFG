#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public:

        void LongestSub(int arr[], int n) {
            
            sort(arr, arr+n);
        
            int count=0, ans=0;

            for(int i=0; i<n; i++){
                
                if(arr[i] == arr[i+1]-1){
                    count++;
                }
                else if(arr[i] == arr[i+1]){
                    continue;
                }
                else{
                    count = 1;
                }
                
                ans=max(ans,count);
            }
            if(ans!=0){
                ans += 1;        
            }
            cout<<ans<<endl;
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
    s.LongestSub(arr, n);
    return 0;
}