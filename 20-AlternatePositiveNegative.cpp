#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
    public:

        void Rotate(int arr[], int n, int from, int to){
            int temp = arr[to];
            for(int i=to; i>from; i--)
            {
                arr[i] = arr[i-1];
            }
            arr[from] = temp;
        }

        void Alternate(int arr[], int n)
        {
            
            int wrong = -1;

            for(int i=0; i<n; i++)
            {

                if(wrong != -1)
                {
                    if(((arr[wrong]) < 0 && (arr[i] > 0)) || ((arr[wrong]) >= 0 && (arr[i] < 0))) {
                        Rotate(arr, n, wrong, i);

                        if(i - wrong  >= 2){
                            wrong += 2;
                        }
                        else{
                            wrong = -1;
                        }
                    } 
                }
                else if(wrong == -1)
                {
                    if((arr[i]<0 && (i%2 == 1) )|| (arr[i]>=0 && (i%2== 0)))
                    {
                        wrong = i;
                    }
                }
            }
        }


        void input(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cin>>arr[i];
            }
        }

        void output(int arr[], int n) {
            for(int i=0; i<n; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
};


int main() {
    int n, ans;
    cin>>n;
    int arr[n];
    Solution s;
    s.input(arr, n);
    s.Alternate(arr, n);
    s.output(arr, n);
    return 0;
}
