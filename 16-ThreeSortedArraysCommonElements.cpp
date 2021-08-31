#include<iostream>
using namespace std;

class Solution {
    public:

        void Common(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) {
            
            int i=0, j=0, k=0, prev1, prev2, prev3;
            prev1 = prev2 = prev3 = INT32_MIN;
            
            while(i<n1 && j<n2 && k<n3){
                
                while(ar1[i]==prev1 && i<n1){
                    i++;
                }
                while(ar2[j]==prev2 && j<n2){
                    j++;
                }
                while(ar3[k]==prev3 && k<n3){
                    k++;
                }

                if(ar1[i] == ar2[j] && ar2[j]==ar3[k]){
                    cout<<ar1[i]<<" ";
                    prev1=ar1[i];
                    prev2=ar2[j];
                    prev3=ar3[k];
                    i++; j++; k++;
                }
                else if(ar1[i]<ar2[j]){
                    prev1=ar1[i];
                    i++;
                }
                else if(ar2[j]<ar3[k]){
                    prev2=ar2[j];
                    j++;
                }
                else{
                    prev3=ar3[k];
                    k++;
                }
            }
        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }
};


int main() {

    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int ar1[n1],ar2[n2],ar3[n3];
    Solution s;
    s.input(ar1, n1);
    s.input(ar2, n2);
    s.input(ar3, n3);
    s.Common(ar1, ar2, ar3, n1, n2, n3);
    cout<<"\n";
    return 0;
}