#include<iostream>
using namespace std;

class Solution {
    public:


        int Partition(int arr[], int low, int high) {
            
            int pivot = arr[high], i=(low-1);

            for(int j=low; j<=high-1; j++) {
                if(arr[j]<pivot){
                    i++;
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[i+1], arr[high]);

            return (i+1);
        }

        void QuickSort(int arr[], int low, int high) {
            if(low < high) {

                int pi = Partition(arr, low, high);
                QuickSort(arr, low, pi-1);
                QuickSort(arr, pi+1, high);
            }

        }

        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }

        void print(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
};


int main() {

    int n;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    s.QuickSort(arr, 0, n-1);
    s.print(arr, n);
    return 0;
}