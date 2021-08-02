#include<iostream>
using namespace std;

class Solution {
    public:

        int Binary(int arr[], int l, int r, int x) {
            
            if(l>r){
                return -1;
            }

            int mid = (l+(r-l))/2;

            if(arr[mid] == x){
                return mid;
            }
            else if(arr[mid]<x){
                return Binary(arr, l, mid-1, x);
            }
            else if(arr[mid]>x){
                return Binary(arr, mid+1, r, x);
            }
        }

        int Count(int arr[], int n, int x) {
            int pos=Binary(arr, 0, n-1, x);
            if(pos==-1){
                return 0;
            }
            else{
                int count=1, left = pos-1, right=pos+1;
                while(arr[left]>0 && arr[left]==x){
                    left--, count++;
                }while(arr[right]<n && arr[right]==x){
                    right++, count++;
                }
                return count;
            }
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