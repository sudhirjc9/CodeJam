#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[], int n, int index, vector<int>&vec)
{
    if(index==n)
        {
            for(auto x: vec)
                cout<<x<<" ";
            cout<<endl;
                return;
        }

    vec.push_back(arr[index]);
    subset(arr, n, index+1, vec);
    vec.pop_back();
    subset(arr, n, index+1, vec);
}

int main()
{
    int arr[]={1,2,3};
    vector<int>vec;
    int n=sizeof(arr)/sizeof(arr[0]);
    subset(arr, n, 0, vec);
}