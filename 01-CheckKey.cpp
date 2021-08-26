#include<iostream>
using namespace std;

class Solution {
    public:

        bool CheckKey(int arr[], int n, int x, int k) {
            
            int i;
            for(i=0; i<n; i=i+k) {
                int j;
                for(j=0; j<k; j++){
                    if(arr[i+j]==x){
                        break;
                    }
                    if(j==k) {
                        return false;
                    }
                }
            }

            if(i==n) {
                return true;
            }

            int j;
            for(j=n-k; j<n; j++){
                if(arr[j]==x){
                    break;
                }
            }
            if(j==n) {
                return false;
            }

            return true;

        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n, x, k;
    bool ans;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    cin>>x>>k;
    ans=s.CheckKey(arr, n, x, k);
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}