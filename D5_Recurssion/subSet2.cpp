#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[], int n, vector<int>&res, int index)
{
    if(index==n)
        {
            for(auto x:res)
                cout<<x<<" ";
            cout<<endl;
            return;
        }

    for(int i=index;i<n;i++)
    {
        // if(i>0 && arr[i]==arr[i-1])
        //     continue;

        res.push_back(arr[i]);
        subset(arr, 3, res, i+1);
        res.pop_back();
         subset(arr, 3, res, i+1);
    }
   // subset(arr, 3, res, n);
}
            

int main(){
    int arr[]={1,2,2};
    int index=0;
    vector<int>res;
    subset(arr, 3, res, index);
    return 0;
}