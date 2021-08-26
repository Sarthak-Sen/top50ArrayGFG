#include<iostream>
using namespace std;

class Solution {
    public:

        void un(int ar1[], int ar2[], int m, int n){
            int i=0, j=0, prev1, prev2;
            prev1 = prev2 = INT32_MIN;
            while(i<m && j<n){
                
                
                if(prev1 == ar1[i]){
                    i++;
                }
                if(prev2 == ar2[j]){
                    j++;
                }
                if(ar1[i]<ar2[j]){
                    prev1 = ar1[i];
                    cout<<ar1[i++]<<" ";
                }
                else if(ar1[i]>ar2[j]){
                    prev2= ar2[j];
                    cout<<ar2[j++]<<" ";
                }
                else if(ar1[i] == ar2[j]){
                    prev1 = ar1[i];
                    prev2= ar2[j];
                    cout<<ar1[i++]<<" ";
                    j++;
                }
            }
            while(i<m){
                cout<<ar1[i++]<<" ";
            }
            while(j<n){
                cout<<ar2[j++]<<" ";
            }
            cout<<"\n";
        }

        void in(int ar1[], int ar2[], int m, int n){
            int i=0, j=0, prev1, prev2;
            prev1 = prev2 = INT32_MIN;
            while(i<m && j<n){
                if(prev1 == ar1[i]){
                    i++;
                }
                if(prev2 == ar2[j]){
                    j++;
                }
                if(ar1[i]<ar2[j]){
                    prev1 = ar1[i];
                    i++;
                }
                else if(ar1[i]>ar2[j]){
                    prev2= ar2[j];
                    j++;
                }
                else if(ar1[i] == ar2[j]){
                    prev1 = ar1[i];
                    prev2= ar2[j];
                    cout<<ar1[i++]<<" ";
                    j++;
                }
            }

            cout<<"\n";
        }



        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int m,n;
    cin>>m>>n;
    Solution s;
    int ar1[m], ar2[n];
    s.input(ar1, m);
    s.input(ar2, n);
    s.un(ar1, ar2, m, n);
    s.in(ar1, ar2, m, n);

    return 0;
}