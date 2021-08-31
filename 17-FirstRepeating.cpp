#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
    public:

        int FirstRepeating(int arr[], int n) {
            
            int k = 0;
            int max = n;
            
            for (int i = 0; i < n; i++)
                if (max < arr[i]){
                    max = arr[i];
                }
            
            int a[max + 1] = {};
            int b[max + 1] = {};
        
            for (int i = 0; i < n; i++)
            {
                if (a[arr[i]])
                {
                    b[arr[i]] = 1;
                    k = 1;
                    continue;
                }
                else
                    a[arr[i]] = i+1;
            }
        
            if (k == 0)
                cout << "No repeating element found" << endl;
            else
            {
                int min = max + 1;
            
                for (int i = 0; i < max + 1; i++)
                    if (a[i] && min > a[i] && b[i]){
                        min = a[i];
                    }
                min -= 1;
                cout << arr[min];
            }
            cout << endl;
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
    s.FirstRepeating(arr, n);
    return 0;
}